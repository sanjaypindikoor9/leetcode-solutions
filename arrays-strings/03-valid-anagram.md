# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

Count the frequency of each lowercase letter in the first string and subtract the frequencies using the second string. If every frequency becomes zero, the strings are anagrams.

## Complexity

- Time: O(n)
- Space: O(1) because the frequency array has 26 positions.

## Notes

Checking the lengths first quickly rejects strings that cannot be anagrams.
