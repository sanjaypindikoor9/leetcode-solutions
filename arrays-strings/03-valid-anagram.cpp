#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    vector<int> freq(26, 0);

    for (char c : s) freq[c - 'a']++;
    for (char c : t) freq[c - 'a']--;

    for (int count : freq) {
        if (count != 0) return false;
    }

    return true;
}

int main() {
    // Test 1: typical case
    cout << "Test 1: "
         << (isAnagram("anagram", "nagaram") ? "true" : "false") << "\n";

    // Test 2: different character counts
    cout << "Test 2: "
         << (isAnagram("rat", "car") ? "true" : "false") << "\n";

    return 0;
}
