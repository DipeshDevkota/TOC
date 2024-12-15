// Ex2: Design and implement an FA that accepts all strings that ends with 01
// a. Testing input1: 0011 => rejected
// b. Testing input2: 11010101 => accepted 

#include <iostream>
#include <string>
using namespace std;

bool checkEndsWith01(const string& w) {
    // Check if the string ends with "01"
    return w.size() >= 2 && w.substr(w.size() - 2) == "01";
}

int main() {
    // Test cases
    string test1 = "0011";
    string test2 = "11010101";

    cout << "FA Validation Results:\n";

    if (checkEndsWith01(test1)) {
        cout << test1 << " => Accepted\n";
    } else {
        cout << test1 << " => Rejected\n";
    }

    if (checkEndsWith01(test2)) {
        cout << test2 << " => Accepted\n";
    } else {
        cout << test2 << " => Rejected\n";
    }

    return 0;
}