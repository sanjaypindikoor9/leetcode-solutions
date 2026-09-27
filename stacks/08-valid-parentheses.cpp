#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    // Test 1: valid nested brackets
    cout << "Test 1: "
         << (isValid("()[]{}") ? "true" : "false") << "\n";

    // Test 2: mismatched brackets
    cout << "Test 2: "
         << (isValid("(]") ? "true" : "false") << "\n";

    return 0;
}
