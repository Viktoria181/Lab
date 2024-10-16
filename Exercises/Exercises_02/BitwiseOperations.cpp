#include <iostream>

using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Select an operation (1: AND, 2: OR, 3: XOR, 4: Left Shift, 5: Right Shift): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Result: " << (num1 & num2) << endl; // Bitwise AND
        break;
    case 2:
        cout << "Result: " << (num1 | num2) << endl; // Bitwise OR
        break;
    case 3:
        cout << "Result: " << (num1 ^ num2) << endl; // Bitwise XOR
        break;
    case 4:
        cout << "Result: " << (num1 << 1) << endl; // Left Shift
        break;
    case 5:
        cout << "Result: " << (num1 >> 1) << endl; // Right Shift
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
