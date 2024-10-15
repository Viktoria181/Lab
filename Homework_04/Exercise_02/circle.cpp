#include "circle.h"  // Include the header to use Pi and declare the function

int circle(double radius, double* perimeter, double* area)
{
    if (radius < 0) {
        return -1;  // Invalid radius
    }
    *perimeter = 2 * PI * radius;
    *area = PI * radius * radius;

    return 0;
}