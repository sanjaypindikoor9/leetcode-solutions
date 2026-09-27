#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < (int)nums.size(); i++) {
        int complement = target - nums[i];

        if (seen.count(complement)) {
            return {seen[complement], i};
        }

        seen[nums[i]] = i;
    }

    return {};
}

int main() {
    // Test 1: typical case
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Test 1: [" << result1[0] << ", " << result1[1] << "]\n";

    // Test 2: duplicates / edge case
    vector<int> nums2 = {3, 3};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Test 2: [" << result2[0] << ", " << result2[1] << "]\n";

    return 0;
}
