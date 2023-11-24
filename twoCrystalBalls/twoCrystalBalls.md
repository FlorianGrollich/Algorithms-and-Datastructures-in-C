# Two Crystal Balls
You get two Crystal balls and try to guess the minimum height at which they break
 
This means you have a sorted array of booleans, and you try to find the first true. But everytime you find a true value one of the crystal balls break.
<br>

```c
Examples:
[false, false, false, true, true, true] => 3
[true, true, true, true] => 0
[false, false, false] => -1 //there is no height
```

## Solution

1. go through array in sqrt(len(array))
2. if true value found go back to previous index
3. do linear search
4. if true value found return index


## Time complexity
### Best Case

- **Description**: The best case occurs when the breaking point is on the first floor.
- **Big O Notation**: `O(1)`
- **Explanation**: This indicates a constant time complexity, as it only takes one drop to determine the breaking point.

### Worst Case

- **Description**: The worst case depends on the strategy used, but a common approach is to divide the building into sections of equal risk.
- **Big O Notation**: `O(sqrt(N))`
- **Explanation**: The complexity is due to the strategy of dividing the building into sections, leading to a number of drops approximately equal to the square root of `N`.

### Average Case

- **Description**: The average case complexity depends on the probability distribution of the breaking point.
- **Big O Notation**: Varies
- **Explanation**: It's generally lower than the worst case and follows a similar trend, but the exact notation is more complex and depends on the specific strategy and distribution.





