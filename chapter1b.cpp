//  Given 2 strings a,b ; return substring which contains first x character of a (prefix) and last x character of b (suffix


#include <iostream>
#include <string>
using namespace std;

string combinePrefixSuffix(const string& a, const string& b, int x) {
    // Ensure x is within valid range for both strings
    if (x > a.length() || x > b.length()) {
        return "Invalid value of x"; // Return an error message if x is invalid
    }

    // Extract prefix and suffix
    string prefix = a.substr(0, x);                     // First x characters of a
    string suffix = b.substr(b.length() - x, x);        // Last x characters of b

    // Combine and return the result
    return prefix + suffix;
}

int main() {
    string a, b;
    int x;

    // Input strings a, b and integer x
    cout << "Enter first string (a): ";
    cin >> a;
    cout << "Enter second string (b): ";
    cin >> b;
    cout << "Enter the value of x: ";
    cin >> x;

    // Get the result and print it
    string result = combinePrefixSuffix(a, b, x);
    cout << "Result: " << result << endl;

    return 0;
}
