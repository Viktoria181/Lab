#include <iostream>
#include "Attendance.h"

void setAttendance(uint64_t& attendance, int student) {
    if (student >= 1 && student <= 64) {
        attendance |= (static_cast<uint64_t>(1) << (student - 1));
        std::cout << "Attendance for student " << student << " has been recorded.\n";
    }
    else {
        std::cout << "Invalid student number.\n";
    }
}

void clearAttendance(uint64_t& attendance, int student) {
    if (student >= 1 && student <= 64) {
        attendance &= ~(static_cast<uint64_t>(1) << (student - 1));
        std::cout << "Absence for student " << student << " has been recorded.\n";
    }
    else {
        std::cout << "Invalid student number.\n";
    }
}

void printAbsent(uint64_t attendance) {
    std::cout << "Absent students: ";
    bool noneAbsent = true;
    for (int i = 0; i < 64; ++i) {
        if (!(attendance & (static_cast<uint64_t>(1) << i))) {
            std::cout << (i + 1) << " ";
            noneAbsent = false;
        }
    }
    if (noneAbsent) {
        std::cout << "No absent students.";
    }
    std::cout << std::endl;
}

void printPresent(uint64_t attendance) {
    std::cout << "Present students: ";
    bool nonePresent = true;
    for (int i = 0; i < 64; ++i) {
        if (attendance & (static_cast<uint64_t>(1) << i)) {
            std::cout << (i + 1) << " ";
            nonePresent = false;
        }
    }
    if (nonePresent) {
        std::cout << "No present students.";
    }
    std::cout << std::endl;
}

void toggleAttendance(uint64_t& attendance, int student) {
    if (student >= 1 && student <= 64) {
        attendance ^= (static_cast<uint64_t>(1) << (student - 1));
        std::cout << "The status for student " << student << " has been toggled.\n";
    }
    else {
        std::cout << "Invalid student number.\n";
    }
}