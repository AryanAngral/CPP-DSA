#include<iostream>
using namespace std;

string replacePi(string s, int index = 0) {
    // Base case: if the string is too short to contain "pi", return it
    if (index >= s.length() - 1) return s;

    // If "pi" is found at the current position
    if (s[index] == 'p' && s[index + 1] == 'i') {
        // Replace "pi" with "3.14"
        s = s.substr(0, index) + "3.14" + replacePi(s.substr(index + 2), 0);
        return s;
    } else {
        // Otherwise, move to the next character
        return s.substr(0, index + 1) + replacePi(s.substr(index + 1), 0);
    }
}

int main() {
    string str = "klsdfjpifdkjfpdjfdpipipii";
    cout << replacePi(str);
    return 0;
}