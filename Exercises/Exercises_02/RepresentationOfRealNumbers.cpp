#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

void printIEEE754(float number) {
    unsigned int bits = *((unsigned int*)&number);
    cout << "Sign: " << ((bits >> 31) & 1) << endl;
    cout << "Exponent: " << bitset<8>((bits >> 23) & 0xFF) << endl;
    cout << "Mantissa: " << bitset<23>(bits & 0x7FFFFF) << endl;
}

int main() {
    float number;
    cout << "Enter a real number: ";
    cin >> number;
    printIEEE754(number);
    return 0;
}
