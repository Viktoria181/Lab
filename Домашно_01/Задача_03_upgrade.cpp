#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

double calculateVolume(double radius, double filledHeight, double length) {
    // Area calculation
    double area = acos((radius - filledHeight) / radius) * radius * radius
        - (radius - filledHeight) * sqrt(2 * radius * filledHeight - filledHeight * filledHeight);

    // Volume calculation
    double volume = area * length;
    return volume;
}

int main() {
    double radius, filledHeight, length;

    // Input
    std::cout << "Enter the radius of the cylinder (in meters): ";
    std::cin >> radius;

    std::cout << "Enter the height to which the cylinder is filled (in meters): ";
    std::cin >> filledHeight;

    std::cout << "Enter the length of the cylinder (in meters): ";
    std::cin >> length;

    // Check for valid inputs
    if (filledHeight > radius) {
        std::cout << "The filled height cannot exceed the radius." << std::endl;
        return 1; // Exit with error
    }

    // Calculate volume
    double volume = calculateVolume(radius, filledHeight, length);

    // Output the result
    std::cout << "The volume of the filled part of the cylinder is: " << volume << " cubic meters." << std::endl;

    return 0;
}
