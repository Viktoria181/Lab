#include <iostream>
#include "Attendance.h" // Include the header file


int main() {
    uint64_t attendance = 0;
    int option, student;

    while (true) {
        std::cout << std::endl;
        std::cout << "1. Record attendance " << std::endl;
        std::cout << "2. Record absence " << std::endl;
        std::cout << "3. Show absent students " << std::endl;
        std::cout << "4. Show present students " << std::endl;
        std::cout << "5. Toggle attendance status " << std::endl;
        std::cout << "6. Exit " << std::endl;
        std::cin >> option;

        if (option == 6) {
            break;
        }

        switch (option) {
        case 1:
            std::cout << "Enter student number (1-64): ";
            std::cin >> student;
            setAttendance(attendance, student);
            break;
        case 2:
            std::cout << "Enter student number (1-64): ";
            std::cin >> student;
            clearAttendance(attendance, student);
            break;
        case 3:
            printAbsent(attendance);
            break;
        case 4:
            printPresent(attendance);
            break;
        case 5:
            std::cout << "Enter student number (1-64): ";
            std::cin >> student;
            toggleAttendance(attendance, student);
            break;
        default:
            std::cerr << "Invalid option. Please try again." << std::endl;
            break;
        }
    }
    return 0;
}
