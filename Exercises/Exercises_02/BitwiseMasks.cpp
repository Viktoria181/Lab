#include <iostream>

using namespace std;

void setBit(int& num, int bitPosition) {
    num |= (1 << bitPosition);
}

void clearBit(int& num, int bitPosition) {
    num &= ~(1 << bitPosition);
}

bool checkBit(int num, int bitPosition) {
    return (num & (1 << bitPosition)) != 0;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int bitPositionToSet = 3;
    int bitPositionToClear = 4;

    cout << "Set " << bitPositionToSet << "-th bit to 1: " << number;
    setBit(number, bitPositionToSet);
    cout << " (now it is " << (checkBit(number, bitPositionToSet) ? "1" : "0") << ")" << endl;

    cout << "Clear " << bitPositionToClear << "-th bit (to 0): " << number;
    clearBit(number, bitPositionToClear);
    cout << " (now it is " << (checkBit(number, bitPositionToClear) ? "1" : "0") << ")" << endl;

    cout << "Resulting number: " << number << endl;

    return 0;
}
