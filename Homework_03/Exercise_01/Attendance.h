#pragma once  
#ifndef ATTENDANCE_H 
#define ATTENDANCE_H

#include <cstdint> // Include for uint64_t

void setAttendance(uint64_t& attendance, int student);
void clearAttendance(uint64_t& attendance, int student);
void printAbsent(uint64_t attendance);
void printPresent(uint64_t attendance);
void toggleAttendance(uint64_t& attendance, int student);

#endif
