/*Create a program to find the first number greater than 50 that is divisible by 7.*/
#include <iostream>
using namespace std;

int main() {
    int num = 51;  // Start from 51 (first number greater than 50)

    while (num % 7 != 0) {
        num++;  // Keep increasing until we find a multiple of 7
    }

    cout << "The first number greater than 50 that is divisible by 7 is: " << num << endl;

    return 0;
}
