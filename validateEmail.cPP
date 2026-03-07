#include <iostream>
#include <regex>
using namespace std;

bool isValidEmail(const string& email) {
    // Basic email pattern: [alphanumeric/._-]+@[domain].[extension]
    const regex pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z]{2,}$)");

    return regex_match(email, pattern);
}

int main() {
    string email;
    cout << "Enter an email address: ";
    cin >> email;

    if (isValidEmail(email))
        cout << "Valid email address." << endl;
    else
        cout << "Invalid email address." << endl;

    return 0;
}
