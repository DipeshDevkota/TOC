// Write a program that implements PDA to accept a language L(wwR) = {wwR | wR is the reverse of w}

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isLanguageWWR(const string& s) {
    int n = s.size();
    if (n % 2 != 0) {
        return false; // Length must be even for wwR
    }

    stack<char> pdaStack;
    int mid = n / 2;

    // Push the first half of the string onto the stack
    for (int i = 0; i < mid; ++i) {
        pdaStack.push(s[i]);
    }

    // Check the second half of the string against the stack
    for (int i = mid; i < n; ++i) {
        if (pdaStack.empty() || pdaStack.top() != s[i]) {
            return false;
        }
        pdaStack.pop();
    }

    return pdaStack.empty();
}

int main() {
    // Test cases
    string test1 = "abccba";
    string test2 = "abcdba";
    string test3 = "aabbccbbaa";

    cout << "PDA Validation Results for L(wwR):\n";

    if (isLanguageWWR(test1)) {
        cout << test1 << " => Accepted\n";
    } else {
        cout << test1 << " => Rejected\n";
    }

    if (isLanguageWWR(test2)) {
        cout << test2 << " => Accepted\n";
    } else {
        cout << test2 << " => Rejected\n";
    }

    if (isLanguageWWR(test3)) {
        cout << test3 << " => Accepted\n";
    } else {
        cout << test3 << " => Rejected\n";
    }

    return 0;
}
