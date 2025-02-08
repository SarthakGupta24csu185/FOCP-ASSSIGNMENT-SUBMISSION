/*Write a program that performs the following operations on an array:
a. Accept an integer array from the user (size determined at runtime).
b. Reverse the array and display it.
c. Find and display the second largest and second smallest elements in the array*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Reverse and display the array
    cout << "Reversed: ";
    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;

    // Sort the array
    sort(arr, arr + n);

    // Find second smallest and second largest
    int secondSmallest = arr[0], secondLargest = arr[n - 1];
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[n - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    cout << "Second Smallest: " << secondSmallest << endl;
    cout << "Second Largest: " << secondLargest << endl;

    return 0;
}
