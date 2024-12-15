//   Regular Expressions: Email validation :


#include <iostream>
#include <regex>
#include <vector>
using namespace std;

bool isValidEmail(const string& email) {
    // Define the regular expression for valid emails
    regex emailPattern(R"(^[a-z0-9]+[_]?[a-z0-9]+[@]\w+[.]\w{2,3}$)");

    // Match the email with the regular expression
    return regex_match(email, emailPattern);
}

int main() {
    vector<string> emails = {
        "dipesh123@gmail.com",
        "dipesh_123@asmt.edu",
        "dipesh@asmt.edu.np",
        "a@b.com",
        "invalidemail.com",
        "test_email@domain.co"
    };

    cout << "Email Validation Results:\n";
    for (const string& email : emails) {
        if (isValidEmail(email)) {
            cout << email << " is valid.\n";
        } else {
            cout << email << " is invalid.\n";
        }
    }

    return 0;
}
