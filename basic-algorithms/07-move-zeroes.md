# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

Keep an insertion position for non-zero values and place each non-zero element there. After all non-zero values are placed, fill the remaining positions with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The relative order of the non-zero elements is preserved while the operation is performed in place.
