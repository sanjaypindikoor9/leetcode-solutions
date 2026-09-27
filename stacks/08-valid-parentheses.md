# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. Whenever a closing bracket appears, compare it with the most recent opening bracket. The string is valid only if all brackets match and the stack is empty at the end.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

An empty stack when a closing bracket is encountered is an immediate invalid case.
