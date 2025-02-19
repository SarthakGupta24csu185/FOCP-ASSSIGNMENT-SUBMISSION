/*Develop a program to reverse the digits of a given number and terminate early if the reversed
number becomes a palindrome.*/
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;
    
    cout << "Enter a number: ";
    cin >> num;
    
    temp = num;  // Store original number

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    cout << "Reversed number: " << rev << endl;

    if (num == rev) {
        cout << "The reversed number is a palindrome. Terminating early!" << endl;
        return 0;
    }

    cout << "The reversed number is not a palindrome." << endl;

    return 0;
}
