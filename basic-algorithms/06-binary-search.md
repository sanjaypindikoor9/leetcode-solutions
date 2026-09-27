# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

Because the input array is sorted, repeatedly compare the target with the middle element. If the target is larger, search the right half; otherwise search the left half.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

Using `left + (right - left) / 2` is a safe way to calculate the middle index.
