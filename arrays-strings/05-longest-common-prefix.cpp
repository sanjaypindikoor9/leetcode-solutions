#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];

    for (int i = 1; i < (int)strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix.pop_back();

            if (prefix.empty()) return "";
        }
    }

    return prefix;
}

int main() {
    // Test 1: common prefix exists
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Test 1: " << longestCommonPrefix(strs1) << "\n";

    // Test 2: no common prefix
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Test 2: " << longestCommonPrefix(strs2) << "\n";

    return 0;
}
