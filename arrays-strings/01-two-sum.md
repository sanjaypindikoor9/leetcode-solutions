# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

Use an `unordered_map` to store each number and its index while traversing the array. For every number, check whether its complement (`target - current`) has already been seen. This avoids the nested-loop approach.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

The hash map lets us handle duplicate values correctly because the earlier index is stored before returning the matching pair.
