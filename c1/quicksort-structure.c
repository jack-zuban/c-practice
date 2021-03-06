#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct {
    int height;
    int width;
    int length;
} box;

typedef struct {
    box **storage;
    int size;
} boxStack;

int comparator(const void * a, const void * b) {
    int left = (* (box **) a)->height;
    int right = (* (box **) b)->height;
    int res = left - right;

    return res;
}

void printBoxesFromStack(boxStack *stack) {
    int boxIndex = 0;
    while (boxIndex < stack->size) {
        box *currentBox = stack->storage[boxIndex];
        if (currentBox != (box *) 0) {
            printf("Box [%i]: %ix%ix%i\n", boxIndex, currentBox->height, currentBox->width, currentBox->length);
        }

        boxIndex++;
    }
}

void exitOnMemoryError(void) {
    fprintf(stderr, "Memory alloc error\n");
    exit(EXIT_FAILURE);
}

boxStack *createBoxStack(int stackSize) {
    boxStack *stack = (boxStack *) malloc(sizeof(boxStack));
    if (stack == NULL) {
        exitOnMemoryError();
    }

    stack->storage = (box **) malloc(sizeof(box *) * stackSize);
    if (stack->storage == NULL) {
        exitOnMemoryError();
    }
    
    stack->size = 0;

    for (int i = 0; i < stackSize; i++) {
        box *newBox = (box *) malloc(sizeof(box));
        if (newBox == NULL) {
            exitOnMemoryError();
        }

        newBox->height = (int) rand() % 100;
        newBox->width = (int) rand() % 100;
        newBox->length = (int) rand() % 100;

        stack->storage[i] = newBox;
        stack->size++;
    }

    return stack;
}

int main(void) {
    int stackSize = 0;
    printf("Please enter stack size: ");
    scanf("%i", &stackSize);
    boxStack *stack = createBoxStack(stackSize);
    qsort((box **) stack->storage, stackSize, sizeof(box *), comparator);

    printBoxesFromStack(stack);

    return 0;
}

