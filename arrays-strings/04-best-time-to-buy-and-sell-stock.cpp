#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < (int)prices.size(); i++) {
        maxProfitValue = max(maxProfitValue, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfitValue;
}

int main() {
    // Test 1: profitable sequence
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test 1: " << maxProfit(prices1) << "\n";

    // Test 2: no profitable transaction
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test 2: " << maxProfit(prices2) << "\n";

    return 0;
}
