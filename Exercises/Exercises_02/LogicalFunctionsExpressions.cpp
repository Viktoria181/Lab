#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, C;

    cout << "Enter value for A (0 or 1): ";
    cin >> A;
    cout << "Enter value for B (0 or 1): ";
    cin >> B;
    cout << "Enter value for C (0 or 1): ";
    cin >> C;

    int result = (A && B) || !C; // (A AND B) OR NOT C
    cout << "The result of (A AND B) OR NOT C is: " << result << endl;

    return 0;
}
