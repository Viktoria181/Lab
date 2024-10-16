#include <iostream>
#include <iomanip>  // For std::setprecision
#include "calculator.h" // Include the header file

double stringToDouble(const char* str) {
    double result = 0.0;
    int sign = 1;
    bool decimalFound = false;
    double decimalMultiplier = 0.1;
    int i = 0;

    // Check for negative sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    // Process the number
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (decimalFound) {
                // After the decimal point, multiply each digit 
                // by the corresponding decimal place value
                result += (str[i] - '0') * decimalMultiplier;
                decimalMultiplier /= 10;
            } else {
                // Before the decimal point, shift digits left 
                // (multiply by 10) and add the new digit
                result = result * 10 + (str[i] - '0');
            }
        } else if (str[i] == '.') {
            if (decimalFound) {
                // If a second decimal point is found, return error
                std::cerr << "Error: Multiple decimal points found in number." << std::endl;
                return 0.0;
            }
            decimalFound = true; // Mark that we've encountered the decimal point
        } else {
            // Invalid character
            std::cerr << "Error: Invalid character in input." << std::endl;
            return 0.0;
        }
    }

    return result * sign;
}
