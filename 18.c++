//Develop a program that performs a circular left and right shift of bits on a given integer and displays the results.
#include <iostream>
using namespace std;

int circularLeftShift(int num, int shift) {
    return (num << shift) | (num >> (32 - shift));
}

int circularRightShift(int num, int shift) {
    return (num >> shift) | (num << (32 - shift));
}

int main() {
    int num, shift;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter shift count: ";
    cin >> shift;

    cout << "Left Shift: " << circularLeftShift(num, shift) << endl;
    cout << "Right Shift: " << circularRightShift(num, shift) << endl;

    return 0;
}
