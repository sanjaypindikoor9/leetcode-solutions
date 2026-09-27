# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Start with the first string as the possible prefix. For each following string, shorten the prefix until it appears at the beginning of that string.

## Complexity

- Time: O(S), where S is the total number of characters examined.
- Space: O(1) excluding the returned prefix.

## Notes

If the prefix becomes empty, there is no common prefix.
