include <iostream>
#include <iomanip>  

int main() {
    double number1, number2, result;
    char operation;

    std::cout << "Enter an expression (e.g., 10 + 5.2): ";
    std::cin >> number1 >> operation >> number2;

    switch (operation) {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case 'x':
        result = number1 * number2;
        break;
    case '/':
        if (number2 == 0) {
            std::cerr << "Error! Division by zero!" << std::endl;
            return 1;
        }
        result = number1 / number2;
        break;
    default:
        std::cerr << "Error! Invalid operation!" << std::endl;
        return 1;
    }

    std::cout << "Result is " << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}
