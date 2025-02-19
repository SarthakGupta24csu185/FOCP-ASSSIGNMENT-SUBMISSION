/*.Write a program that calculates the grade of a student based on their marks using ifelse/switch statements.*/
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    // Using if-else
    if (marks >= 90) cout << "Grade: A" << endl;
    else if (marks >= 80) cout << "Grade: B" << endl;
    else if (marks >= 70) cout << "Grade: C" << endl;
    else if (marks >= 60) cout << "Grade: D" << endl;
    else cout << "Grade: F" << endl;

    // Using switch
    switch (marks / 10) {
        case 10: case 9: cout << "Grade: A" << endl; break;
        case 8: cout << "Grade: B" << endl; break;
        case 7: cout << "Grade: C" << endl; break;
        case 6: cout << "Grade: D" << endl; break;
        default: cout << "Grade: F" << endl;
    }

    return 0;
}
