// Design a Turing Machine that accepts the language L = { 0^n1^n | n >= 1}

#include <iostream>
#include <string>
using namespace std;

bool turingMachine(const string& s) {
    int n = s.size();
    int left = 0;
    int right = n - 1;

    while (left < n && s[left] == '0') {
        ++left;
    }

    while (right >= 0 && s[right] == '1') {
        --right;
    }

    // Check if the remaining characters are valid and 0^n1^n
    return left > right && left == n - (right + 1);
}

int main() {
    // Test cases
    string test1 = "01";
    string test2 = "0011";
    string test3 = "000111";
    string test4 = "00011";

    cout << "Turing Machine Validation Results for L(0^n1^n):\n";

    if (turingMachine(test1)) {
        cout << test1 << " => Accepted\n";
    } else {
        cout << test1 << " => Rejected\n";
    }

    if (turingMachine(test2)) {
        cout << test2 << " => Accepted\n";
    } else {
        cout << test2 << " => Rejected\n";
    }

    if (turingMachine(test3)) {
        cout << test3 << " => Accepted\n";
    } else {
        cout << test3 << " => Rejected\n";
    }

    if (turingMachine(test4)) {
        cout << test4 << " => Accepted\n";
    } else {
        cout << test4 << " => Rejected\n";
    }

    return 0;
}
