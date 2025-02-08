/*Rotate a square matrix 90 degrees clockwise.*/
#include <iostream>
using namespace std;

void rotateMatrix(int n, int mat[][100]) {
    for (int i = 0; i < n; i++) {  // Transpose
        for (int j = i; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {  // Reverse rows
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            swap(mat[i][j], mat[i][k]);
        }
    }
}

void printMatrix(int n, int mat[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int n, mat[100][100];
    cout << "Enter matrix size: ";
    cin >> n;
    
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    rotateMatrix(n, mat);

    cout << "Rotated Matrix:\n";
    printMatrix(n, mat);

    return 0;
}
