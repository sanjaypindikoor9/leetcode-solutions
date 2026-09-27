#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0, right = (int)s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

void printVector(const vector<char>& s) {
    cout << "[";
    for (int i = 0; i < (int)s.size(); i++) {
        cout << "'" << s[i] << "'";
        if (i + 1 < (int)s.size()) cout << ", ";
    }
    cout << "]\n";
}

int main() {
    // Test 1: typical case
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1);
    cout << "Test 1: ";
    printVector(s1);

    // Test 2: single element edge case
    vector<char> s2 = {'a'};
    reverseString(s2);
    cout << "Test 2: ";
    printVector(s2);

    return 0;
}
