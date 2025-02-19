/*Write a program to calculate the Least Common Multiple (LCM) and Greatest Common Divisor (GCD) of two integers.*/
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "GCD: " << x << endl;
    cout << "LCM: " << (a * b) / x << endl;

    return 0;
}
