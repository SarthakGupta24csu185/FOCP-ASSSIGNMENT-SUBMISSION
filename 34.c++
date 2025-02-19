/*Create a program that takes input for a 2D array and prints the array in a formatted table,
ensuring proper alignment of all elements.*/
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    cout << "\nFormatted Table:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << "\t";  // Tab space for alignment
        cout << endl;
    }

    return 0;
}
