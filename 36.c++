#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Array to store numbers
    double arr[n], sum = 0;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  // Add each number to sum
    }

    double average = sum / n;  // Calculate average

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
