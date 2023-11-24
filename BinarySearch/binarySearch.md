# Binary Search Algorithm

## Overview
Binary Search is an efficient search algorithm that finds the position of a target value within a sorted array. It compares the target value to the middle element of the array; if they are not equal, it halves the array and repeats this process on the half that could contain the target value.

## Requirements
- The array must be sorted.

## How It Works
1. Find the middle element of the array.
2. Compare the middle element with the target value.
3. If the target value matches the middle element, the search is complete.
4. If the target value is less than the middle element, repeat the search on the left half of the array.
5. If the target value is greater than the middle element, repeat the search on the right half of the array.
6. Repeat steps 1-5 until the target is found or the subarray reduces to zero.

## Time Complexity
- Best-case: O(1)
- Average-case: O(log n)
- Worst-case: O(log n)


