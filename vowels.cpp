#include <iostream>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout<<ch<<" ";
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = countVowels(input);
    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
