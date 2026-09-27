# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Track the minimum price seen so far and calculate the profit obtained by selling at each later price. Keep the maximum profit found during the traversal.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The important condition is that the buying day must occur before the selling day.
