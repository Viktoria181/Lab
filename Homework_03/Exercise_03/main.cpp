#include <iostream>
#include <cstdlib>  // For atof
#include <iomanip>  // For std::setprecision
#include "calculator.h" // Include the header file

int main(int argc, char* argv[]) {
    // Check for the number of arguments
    if (argc != 4) {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }

    // Read numbers and operation from command line
    double num1 = stringToDouble(argv[1]);
    double num2 = stringToDouble(argv[3]);
    char operation = argv[2][0];
    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case 'x':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cerr << "Error: Division by zero." << std::endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            std::cerr << "Error: Invalid operation." << std::endl;
            return 1;
    }

    // Output the result rounded to two decimal places
    std::cout << "Result = " << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}
