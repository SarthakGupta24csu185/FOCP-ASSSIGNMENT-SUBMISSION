//Write a program to generate and display the first n prime numbers using a combination of for and while loops in c++
#include <iostream>
using namespace std;

int main() {
    int n, count = 0, num = 2; 

    cout << "Enter the number of prime numbers to display: ";
    cin >> n;

    cout << "First " << n << " prime numbers: ";
    
    while (count < n) {  
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) { 
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }

        num++; 
    }

    return 0;
}
