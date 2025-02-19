/*Create a simple Menu Driven calculator that performs addition, subtraction, multiplication, &
division based on the user's choice & repeat the menu until the user chooses to “Exit”.*/
#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\nSimple Calculator Menu\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1: cout << "Result: " << num1 + num2 << endl; break;
            case 2: cout << "Result: " << num1 - num2 << endl; break;
            case 3: cout << "Result: " << num1 * num2 << endl; break;
            case 4: 
                if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
                else cout << "Error: Division by zero!" << endl;
                break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
