#include <iostream>
using namespace std;

int main() {
    cout << "Enter the Name: ";
    string name;
    cin >> name;

    int n = name.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (name[i] != name[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "It is a Palindrome String";
    } else {
        cout << "Not a Palindrome String";
    }

    return 0;
}
