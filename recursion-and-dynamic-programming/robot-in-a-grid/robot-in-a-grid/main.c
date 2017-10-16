//
//  main.c
//  robot-in-a-grid: find a path from the top left to the bottom right corner for a robot in a MxN grid
//  where the robot can move only right and down, and some cells on the grid are marked as closed.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NULL_PATH (struct Path *) 0
#define NULL_CACHE (struct Cache *) 0
#define NULL_POINT (struct Point *) 0

struct Point {
    int row;
    int col;
};

struct Path {
    struct Point *point;
    struct Path *next;
};

struct Cache {
    bool hasPath;
};

// path-list related functions
struct Path *createEmptyPath(void);
bool getPath(int rowsNumber, int colsNumber, bool maze[rowsNumber][colsNumber], int rowIndex, int colIndex, struct Path *path, struct Cache *cache[]);
void addPointToPath(struct Point *point, struct Path **path);

// cache related functions
struct Cache **initializeCacheHashTable(int cacheSize);
int computeCacheHash(struct Point *point);
bool isPathToPointCached(struct Cache *cache[], struct Point *point);
bool getIsPointReachableFromCache(struct Cache *cache[], struct Point *point);
void cachePathToPoint(struct Cache *cache[], struct Point *point, bool isPathReachable);

void testFindingPath(void);

// create cache hash table and set all its entries to null
struct Cache **initializeCacheHashTable(int cacheSize) {
    struct Cache **cache = (struct Cache **) malloc(cacheSize * sizeof(struct Cache *));

    for (int i = 0; i < cacheSize; i++) {
        cache[i] = NULL_CACHE;
    }

    return cache;
}

// HASH function
int computeHash(struct Point *point) {
    return 5 * (point->row) + (point->col);
}

// check if the point is in the cache table
bool isPathToPointCached(struct Cache *cache[], struct Point *point) {
    return cache[computeHash(point)] != NULL_CACHE;
}

// return cached path to point status
bool getIsPointReachableFromCache(struct Cache *cache[], struct Point *point) {
    return cache[computeHash(point)]->hasPath;
}

// cache if path to the point exist result
void cachePathToPoint(struct Cache *cache[], struct Point *point, bool isPathReachable) {
    int cachIndex = computeHash(point);

    // allocate memory for cache
    struct Cache *cacheEntry = (struct Cache *) malloc(sizeof(struct Cache));
    if (cacheEntry == NULL) {
        fprintf(stderr, "Memory alloc error\n");
        exit(EXIT_FAILURE);
    }

    cacheEntry->hasPath = isPathReachable;
    cache[computeHash(point)] = cacheEntry;
}

// create new point using row and col indexes
struct Point *createNewPoint(rowIndex, colIndex) {
    struct Point *point = (struct Point *) malloc(sizeof(struct Point));
    if (point == NULL) {
        fprintf(stderr, "Memory alloc error\n");
        exit(EXIT_FAILURE);
    }

    point->row = rowIndex;
    point->col = colIndex;

    return point;
}

// struct Path represents a linked list where each point represents a route/path.
void addPointToPath(struct Point *point, struct Path **pathHead) {
    struct Path *newPath = (struct Path *) malloc(sizeof(struct Path));
    if (newPath == NULL) {
        fprintf(stderr, "Memory alloc error\n");
        exit(EXIT_FAILURE);
    }

    newPath->point = point;
    newPath->next = *pathHead;
    *pathHead = newPath;
}

// return path if exists
struct Path *findPath(const int rows, const int cols, bool maze[rows][cols]) {
    if (rows == 0 || cols == 0) {
        return NULL_PATH;
    }

    struct Path *path = NULL_PATH;
    struct Cache **cache = initializeCacheHashTable(rows * cols);

    if (getPath(rows, cols, maze, rows - 1, cols - 1, path, cache)) {
        return path;
    }

    return NULL_PATH;
}

// check if a path to a given point in the maze exists
bool getPath(int rows, int cols, bool maze[rows][cols], int rowIndex, int colIndex, struct Path *path, struct Cache *cache[]) {
    // if out of range or the cell is "closed"
    if (rowIndex < 0 || colIndex < 0 || ! maze[rowIndex][colIndex]) {
        return false;
    }

    struct Point *point = createNewPoint(rowIndex, colIndex);
    
    // check do we have cached a path to the current point
    if (isPathToPointCached(cache, point)) {
        return getIsPointReachableFromCache(cache, point);
    }

    // if we don't have a cached value, we need to compute it
    bool isAtOrigin = (rowIndex == 0) && (colIndex == 0);
    bool isPathReachable = false;

    // recursively check all the previous points paths till the start of the maze (row 0, col 0)
    if (isAtOrigin || getPath(rows, cols, maze, rowIndex - 1, colIndex, path, cache)
            || getPath(rows, cols, maze, rowIndex, colIndex - 1, path, cache)) {
        addPointToPath(point, &path); // add the current point to the path list
        isPathReachable = true;   
    }

    // add the current path to point reachable status to the cache for the future use
    cachePathToPoint(cache, point, isPathReachable);

    return isPathReachable;
}

int main(void) {
    // some testing;
    bool maze[5][5] = {
        {true, true, true, true, true},
        {true, true, true, true, true},
        {true, true, true, true, true},
        {true, true, true, true, true},
        {true, true, true, true, true},
    };

    struct Path *path = findPath(5, 5, maze);

    printf("The path is: ");
    while (path != NULL_PATH) {
        printf("-> point(%i, %i)", path->point->row, path->point->col);
        path = path->next;
    }
    printf("\n");
    
    return 0;
}

