#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <cmath>

using namespace std;

void convertDecimal(int decimal) {
    cout << "Binary: " << bitset<32>(decimal).to_string().substr(32 - (decimal ? (int)log2(decimal) + 1 : 1)) << endl;
    cout << "Octal: " << oct << decimal << endl;
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Select a conversion option:\n";
        cout << "1. Decimal to Binary, Octal, and Hexadecimal\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Octal to Decimal\n";
        cout << "4. Hexadecimal to Decimal\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            convertDecimal(decimal);
        }
        else {
            string number;
            cout << "Enter the number: ";
            cin >> number;

            switch (choice) {
            case 2:
                cout << "Decimal: " << stoi(number, nullptr, 2) << endl;
                break;
            case 3:
                cout << "Decimal: " << stoi(number, nullptr, 8) << endl;
                break;
            case 4:
                cout << "Decimal: " << stoi(number, nullptr, 16) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
            }
        }
    }
    return 0;
}
