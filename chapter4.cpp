// Lab 4: WAP that implements a CFG to accept a language of palindrome.

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    // Test cases
    string test1 = "abba";
    string test2 = "abcba";
    string test3 = "hello";

    cout << "CFG Palindrome Validation Results:\n";

    if (isPalindrome(test1)) {
        cout << test1 << " => Accepted\n";
    } else {
        cout << test1 << " => Rejected\n";
    }

    if (isPalindrome(test2)) {
        cout << test2 << " => Accepted\n";
    } else {
        cout << test2 << " => Rejected\n";
    }

    if (isPalindrome(test3)) {
        cout << test3 << " => Accepted\n";
    } else {
        cout << test3 << " => Rejected\n";
    }

    return 0;
}