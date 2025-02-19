/*.Create a program that determines whether a given floating-point number can be represented
exactly in binary format and explains why (hint: binary representation of floating-point
numbers).*/
#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    if (num == static_cast<float>(num)) {
        cout << "The number can be exactly represented in binary.\n";
    } else {
        cout << "The number cannot be exactly represented in binary.\n";
    }

    return 0;
}
