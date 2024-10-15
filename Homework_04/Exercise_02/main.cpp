#include <iostream>
#include <iomanip>
#include "circle.h"

int main()
{
    double radius, perimeter, area, result;
    std::cout << "Enter the radius of the circle: ";

    // Loop until EOF
    while (std::cin >> radius)
    {
        // Call the circle function 
        result = circle(radius, &perimeter, &area); 

        if (result == -1) { // Check the return value
            // Invalid radius, print error message
            std::cerr << "Incorrect radius!" << std::endl;
        }
        else {
            // Valid radius, print perimeter and area
            std::cout << "The perimeter is " << std::fixed << std::setprecision(2) << perimeter
                << " and the area is " << std::fixed << std::setprecision(2) << area << std::endl;

        }

        std::cout << "Enter the radius of the circle: ";
    }

    return 0;
}
