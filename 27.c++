/*Create a program that finds and displays all Armstrong numbers within a given range using nested loops.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range: ";
    cin >> start >> end;
    
    cout << "Armstrong numbers: ";
    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num, digits = log10(num) + 1;
        while (temp) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }
        if (sum == num) cout << num << " ";
    }
    return 0;
}