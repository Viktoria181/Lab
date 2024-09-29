#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int largest, second_largest;

    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
            second_largest = (num2 > num3) ? num2 : num3;
        }
        else {
            largest = num3;
            second_largest = num1;
        }
    }
    else {
        if (num2 >= num3) {
            largest = num2;
            second_largest = (num1 > num3) ? num1 : num3;
        }
        else {
            largest = num3;
            second_largest = num2;
        }
    }

    std::cout << "The largest number is: " << largest << std::endl;
    std::cout << "The second largest number is: " << second_largest << std::endl;

    return 0;
}



$ g++ Exercise_04.cpp -o largest
$ ./largest
$ ./largest < numbers
