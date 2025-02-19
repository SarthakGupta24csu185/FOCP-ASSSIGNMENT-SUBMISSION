/*Create a program that determines whether a given number is prime using a while loop*/
#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2) 
        isPrime = false;
    else {
        while (i * i <= num) {  // Check divisibility up to sqrt(num)
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
