/*Write a program that:
a. Accepts a string from the user.
b. Checks whether the string is a palindrome (ignoring spaces and case sensitivity).
c. Counts and displays the frequency of each character in the string (case
insensitive).
d. Replace all vowels in the string with a specific character (e.g., *)*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

bool isPalindrome(string str) {
    string cleanedStr = "";
    for (char c : str) {
        if (isalnum(c)) cleanedStr += tolower(c);
    }
    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return cleanedStr == reversedStr;
}


void countFrequency(string str) {
    map<char, int> freq;
    for (char c : str) {
        if (isalpha(c)) freq[tolower(c)]++;
    }

    cout << "Character frequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}


string replaceVowels(string str, char replacement) {
    string vowels = "aeiouAEIOU";
    for (char &c : str) {
        if (vowels.find(c) != string::npos) c = replacement;
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    countFrequency(str);

    string modifiedStr = replaceVowels(str, '*');
    cout << "String after replacing vowels: " << modifiedStr << endl;

    return 0;
}