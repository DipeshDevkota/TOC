// Write programs for illustrating the concepts of Strings, Prefix, Suffix and Substring of a String.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Basic Foundations: Concepts of Strings, Prefix, Suffix, and Substring of a String
    // Creating a string
    string myString = "Hello, World!";

    // Displaying the original string
    cout << "Original String: " << myString << endl;

    // 1. String
    cout << "1. String: " << myString << endl;

    // 2. Prefix
    string prefix = myString.substr(0, 5); // Extracting the prefix (first 5 characters)
    cout << "2. Prefix: " << prefix << endl;

    // 3. Suffix
    string suffix = myString.substr(myString.length() - 6); // Extracting the suffix (last 6 characters)
    cout << "3. Suffix: " << suffix << endl;

    // 4. Substring
    string substring = myString.substr(7, 5); // Extracting a substring (starting from index 7, length 5)
    cout << "4. Substring: " << substring << endl;

    return 0;
}
