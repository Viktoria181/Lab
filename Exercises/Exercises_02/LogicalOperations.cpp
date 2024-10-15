#include <iostream>
#include <bitset>

using namespace std;

void logicalOperations(const string& first, const string& second) {
    bitset<4> a(first);
    bitset<4> b(second);

    cout << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "NOT to the first one: " << (~a) << endl;
}

int main() {
    string first, second;
    cout << "Enter the first one: ";
    cin >> first;
    cout << "Enter the second one: ";
    cin >> second;

    logicalOperations(first, second);
    return 0;
}
