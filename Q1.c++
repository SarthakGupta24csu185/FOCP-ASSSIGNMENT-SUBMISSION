/*Write a C++ program to take a positive integer n as input and:
1. Check whether n is a prime number.
2. If it is not prime, find all its factors.
3. If it is prime, find the next prime number greater than n.*/


#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the next prime number greater than n
int nextPrime(int num) {
    do {
        num++;
    } while (!isPrime(num));
    return num;
}

// Function to print all factors of a number efficiently
void printFactors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
            if (i != num / i) cout << num / i << " ";  // Avoid duplicate factors
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number is: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        printFactors(n);
    }

    return 0;
}