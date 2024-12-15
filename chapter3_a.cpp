// Ex1: Suppose Regular Language accepts all strings over w ∈(a,b)* which contains “aba” as a substring. Write a
// function named checkValidDFA() to validate the above language.
// a. Illustrate for "ababa" => Should be Accepted
// b. Illustrate for "bbaa" => Should be Rejected



#include <iostream>
#include <string>
using namespace std;

bool checkValidDFA(const string& w) {
    // Check if the string contains "aba" as a substring
    return w.find("aba") != string::npos;
}

int main() {
    // Test cases
    string test1 = "ababa";
    string test2 = "bbaa";

    cout << "DFA Validation Results:\n";

    if (checkValidDFA(test1)) {
        cout << test1 << " => Accepted\n";
    } else {
        cout << test1 << " => Rejected\n";
    }

    if (checkValidDFA(test2)) {
        cout << test2 << " => Accepted\n";
    } else {
        cout << test2 << " => Rejected\n";
    }

    return 0;
}
