//Write a program that determines whether two integers are opposites in sign without using conditional statements (hint: use bitwise XOR)
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << ((x ^ y) < 0 ? "Number have Opposite signs" : "Number have Same sign") << endl;
    return 0;
}
