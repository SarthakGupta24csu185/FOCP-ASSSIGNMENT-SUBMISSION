/*Print a spiral pattern of numbers for a given size n.
Example for n = 4 (4x4 matrix):
*/
#include <iostream>
using namespace std;

void printSpiral(int n) {
    int arr[n][n], num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) arr[top][i] = num++;  // Left to Right
        top++;

        for (int i = top; i <= bottom; i++) arr[i][right] = num++; // Top to Bottom
        right--;

        for (int i = right; i >= left; i--) arr[bottom][i] = num++; // Right to Left
        bottom--;

        for (int i = bottom; i >= top; i--) arr[i][left] = num++;  // Bottom to Top
        left++;
    }

    // Print the spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    printSpiral(n);

    return 0;
}
