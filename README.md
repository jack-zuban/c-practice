# c-practice
Practicing C language: small and easy code examples on C for fun.

This repo includes small solutions written on C using different sources for ideas:

1. A part of the code examples and ideas are based on "Programming in C" book written by Stephen G. Kochan.

2. Another part of the code are solutions to the coding tasks from "Cracking the Coding Interview" book written by Gaylee Laakmann McDowell.

### Solutions to the "Cracking the Coding Interview" tasks.


**Arrays and Strings**
1. [String unique characters check:](https://github.com/jack-zuban/c-practice/tree/master/array-and-strings/unique-characters/unique-characters/main.c) Determine if given string has all unique characters.

2. [Strings permutation check:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/string-permutation-check/string-permutation-check/main.c) Determine if one of the two given string is a permutation of the other.

3. [Replacing spaces using pointers:](https://github.com/jack-zuban/c-practice/tree/master/array-and-strings/URLfy/URLfy/main.c) URLfy: a method to replace all spaces in a string with '%20'. The algorithm in my code does replacements from the end of the string.

4. [Permutation of a palindrome check using bit mask:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/palindrome-permutation/palindrome-permutation/main.c) Check if given string is a permutation of a palindrome. The palindrome could be any character sequence and it does not need to be limited to dictionary words.

5. [One edit away checker:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/one-away/one-away/main.c) Check that two strings are one (or none) edit away from each other.

6. [String compression:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/string-compression/string-compression/main.c) Compress a given string using the count of repeated characters. Return the original string if the compressed string length is more or equal original.

7. [Matrix Rotation:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/matrix-rotation/matrix-rotation/main.c) Rotate a given NxN matrix 90 by degrees doing in place rotation.

8. [Zero Matrix:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/zero-matrix/zero-matrix/main.c) On a given matrix MxN if an element is 0, set its entire row and col to 0 without using extra space for storage.

9. [String Rotation Check:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/string-rotation/string-rotation/main.c) Given two strings s1 and s2, check if s2 is a rotation of s1.


**Linked Lists**
1. [Remove duplicates:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/remove-duplicates/remove-duplicates/main.c) Remove duplicates from a linked list.

2. [Return nth to last:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/find-nth-to-last/find-nth-to-last/main.c) Return Nth to last element in a linked list using recursion during searhing.

3. [Delete middle node:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/delete-middle-node/delete-middle-node/main.c) Delete a node in the middle from a linked list given access to this node only.

4. [Linked list partitioning:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/list-partition/list-partition/main.c) Partition a linked list around given X by moving nodes less than X to the left, and more or equal to the right side of the list.

5. [Sum linked lists in reverse order:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/sum-reverse-lists/sum-reverse-lists/main.c) and [recursion version:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/sum-reverse-lists/sum-reverse-lists/recursion.c) add two linked lists which represent integer numbers in reverse order, and write the result into a linked list in reverse order too. Example: (1 -> 3 -> 5) + (2 -> 3 -> 4) = (3 -> 6 -> 9) represents 531 + 432 = 963.

6. [Sum linked lists:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/sum-lists/sum-lists/main.c) add two linked lists which represent integer numbers and write the result into a linked list using left to right numbers order. Example: (1 -> 3 -> 5) + (2 -> 3 -> 4) = (3 -> 6 -> 9) represents 135 + 234 = 369.

8. [Palindrome:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/palindrome/palindrome/main.c) determine if a given linked list is a palindrome.

9. [Intersection:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/intersection/intersection/main.c) find if two linked list intersects sharing the same nodes by references.

10. [Loop detection:](https://github.com/jack-zuban/c-practice/blob/master/linked-lists/loop-detection/loop-detection/main.c) find if a given list has a loop, and return the loop head if it exists.


**Stack and queue**
1. [Three stacks in one array:](https://github.com/jack-zuban/c-practice/blob/master/stack-and-queues/stack-in-array/stack-in-array/main.c) Implement three stacks using a single array.

2. [Stack min():](https://github.com/jack-zuban/c-practice/tree/master/stack-and-queues/stack-min/stack-min) Add min() function to a stack implementation which returns the minimum element from the stack in O(1) time.

3. [Stack of plates:](https://github.com/jack-zuban/c-practice/blob/master/stack-and-queues/stack-of-plates/stack-of-plates/main.c) Implement a data structure that will work as a stack of plates using fixed-size stacks for storing nodes. pop() and push() on the stack of plates structure should function identically to a regular stack.

4. [Queue via Stacks:](https://github.com/jack-zuban/c-practice/blob/master/stack-and-queues/queue-via-stacks/queue-via-stacks/main.c) Implement a queue that will use two stacks for its nodes.

5. [Sort a stack:](https://github.com/jack-zuban/c-practice/blob/master/stack-and-queues/sort-stack/sort-stack/main.c) Sort a given stack using only one additional temp stack.

6. [Animal Shelter:](https://github.com/jack-zuban/c-practice/blob/master/stack-and-queues/animal-shelter/animal-shelter/main.c) A FIFO queue that accepts dogs and cats and returns the "oldest" cat or dog as requested.

**Trees and Graphs**
1. [Route between nodes:](https://github.com/jack-zuban/c-practice/blob/master/trees-and-graphs/route-between-nodes/route-between-nodes/main.c) Find if there is a route between two nodes in a given directed graph.

2. [Minimal tree:](https://github.com/jack-zuban/c-practice/blob/master/trees-and-graphs/minimal-tree/minimal-tree/main.c) Create a minimal binary search tree from a sorted (INC order) array with unique integers.

3. [List Of Depths:](https://github.com/jack-zuban/c-practice/blob/master/trees-and-graphs/list-of-depths/list-of-depths/main.c) Create a linked list of all the nodes at each depth from the given binary tree.

4. [List Of Depth:](https://github.com/jack-zuban/c-practice/blob/master/trees-and-graphs/list-of-depth/list-of-depth/main.c) Create a linked list of all the nodes of a specified depth from a given binary tree. Result will have one linked list for a given depth.

5. [Check Balanced:](https://github.com/jack-zuban/c-practice/blob/master/trees-and-graphs/check-balanced/check-balanced/main.c) Check if a binary tree is is balanced. A balanced tree is defined to be a tree such that the heights of the two subtrees of any node never differ by more than one.

6. [Validate BST:](https://github.com/jack-zuban/c-practice/blob/master/trees-and-graphs/validate-bst/validate-bst/main.c) Check if a given binary tree is a binary search tree.

**Bit Manipulations**
1. [Insertion:](https://github.com/jack-zuban/c-practice/blob/master/bit-manipulations/insertion/insertion/main.c) Insert bits from 32-bit number M into 32-bit number N into position starts from bit j and ends on bit i. Example: N = 100000, M = 000111, j = 3, i = 1, result = 101110

**Recursion and Dynamic programming**
1. [Triple Step:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/triple-step/triple-step/main.c) Count how many possible ways a child can run up a staircase with n steps jumping 1, 2 or 3 steps at a time. Memorization solution.

2. [Robot in a Grid path:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/robot-in-a-grid/robot-in-a-grid/main.c) Find a path from the top left to the bottom right corner for a robot in a MxN grid where the robot can move only right and down, and some cells on the grid are marked as closed.

3. [Magic Index:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/magic-index/magic-index/main.c) Find a magic index if exists in a sorted array of unique integers. A magic index in an array A[0..n-1] is an index where A[i] = i.

4. [Power Set:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/power-set/power-set/main.c) Return all subsets of a set using a binary mask approach for that.

5. [Recursive Multiply:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/recursive-multiply/recursive-multiply/main.c) Multiply two numbers without using * or / operators.

6. [Tower Of Hanoi:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/tower-of-hanoi/tower-of-hanoi/main.c) A classic Tower Of Hanoi problem using stack.

7. [Permutation without dups:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/permutation-without-dups/permutation-without-dups/main.c) Compute all the permutations of a given string with unique characters.

8. [Parens:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/parens/parens/main.c) Print all valid combinations of n pairs of parentheses. Fill all the surrounding area until the color changes the original color. "Paint fill" function analogy.

9. [Paint fill:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/paint-fill/paint-fill/main.c) Given an MxN array represents a screen with pixels of different colors, a point, and a color.

10. [Coins:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/coins/coins/main.c) Given infinite number of coins 25, 10, 5, and 1 cents. Compute the number of ways representing n cents.

11. [Eight Queens:](https://github.com/jack-zuban/c-practice/blob/master/recursion-and-dynamic-programming/eight-queens/eight-queens/main.c) Print all the ways of arrangings 8 queens on an 8x8 chessboard that none of the queens shares the same row, column, or diagonal.

**Sorting and searching**
1. [Sorted Merge:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/sorted-merge/sorted-merge/main.c) Given two sorted arrays A and B, where A has enough space at the end to hold B. Merge B into A in sorted order.

2. [Group Anagram:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/group-anagrams/group-anagrams/main.c) Sort an array of strings so that all anagrams will be next to each other.

3. [Search in Rotated Array:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/search-in-rotated-array/search-in-rotated-array/main.c) Return the index of a given element in a sorted array that has been rotated any number of times. Example: find 2 in {4, 5, 1, 2, 3}. Output 3 (index of 2 in the array).

4. [Sorted Search, No Size:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/sorted-search-no-size/sorted-search-no-size/main.c) Given a list structure that holds only positive int elements in a sorted order. The structure can't provide the number of its elements, but it provides getElementAt(i) method that returns the element at index i in O(1) time. If i is out of the range, the method returns -1. Find the index at which given element X occurs in the structure or -1 if it doesn't exist.

5. [Sparse Search:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/sparse-search/sparse-search/main.c) Find the index of a given string in an array of sorted strings that is interspersed with empty strings.

6. [Missing int:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/missing-int/missing-int/main.c) Given a file with four billion non-negative integers. Write an algorithm to generate a missing integer from the file using only 1GB of memory.

7. [Find Duplicates:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/find-duplicates/find-duplicates/main.c) Find and print all the duplocates in an array from 1..N where N is max 32000 assuming that the N is not known, and only 4K of memory is available.

8. [Sorted Matrix Search:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/sorted-matrix-search/sorted-matrix-search/main.c) Find an element in a given MxN matrix in which each row and column is sorted in ASC order.

9. [Rank from Stream:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/rank-from-stream/rank-from-stream/main.c) In a given range of integers (imaginary input stream) find the rank of a number X. Finding the rank of X means to return number of values less than or equal to x (excluding the x itself).

10. [Peaks And Valleys:](https://github.com/jack-zuban/c-practice/blob/master/sorting-and-searching/peaks-and-valleys/peaks-and-valleys/main.c) Sort a given array of integers into an alternating sequence of "peaks" and "valleys".

**Hard tasks**
1. [Add Without Plus:](https://github.com/jack-zuban/c-practice/blob/master/hard/add-without-plus/add-without-plus/main.c) Add two numbers without using any arithmetic operators.
4. [Find missing number:](https://github.com/jack-zuban/c-practice/blob/master/array-and-strings/missing%20number/missing%20number/main.c) Find a missing number in an array of integers from 0 to n where the numbers in the array are stored in binary form and we can read only i-th bit of j-th element in O(1) time.
### Algorithms ###
1. [Find a 1d peak:](https://github.com/jack-zuban/c-practice/blob/master/algorithms/peak-finder-1d.c) Find a peak in 1D array `a[]`, where `a[i]` is a peak if `a[i-1] <= a[i] <= a[i+1]`
