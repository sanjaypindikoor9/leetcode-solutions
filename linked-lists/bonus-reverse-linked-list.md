# Problem: Reverse a Linked List (Easy) — Bonus

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

Use three pointers: previous, current, and next. Reverse each link one at a time and move the pointers forward until the entire list is reversed.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The empty-list case naturally works because `current` starts as `nullptr`.
