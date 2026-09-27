#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int insertPosition = 0;

    for (int num : nums) {
        if (num != 0) {
            nums[insertPosition++] = num;
        }
    }

    while (insertPosition < (int)nums.size()) {
        nums[insertPosition++] = 0;
    }
}

void printVector(const vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < (int)nums.size(); i++) {
        cout << nums[i];
        if (i + 1 < (int)nums.size()) cout << ", ";
    }
    cout << "]\n";
}

int main() {
    // Test 1: zeros mixed with non-zero values
    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);
    cout << "Test 1: ";
    printVector(nums1);

    // Test 2: all zeros
    vector<int> nums2 = {0, 0, 0};
    moveZeroes(nums2);
    cout << "Test 2: ";
    printVector(nums2);

    return 0;
}
