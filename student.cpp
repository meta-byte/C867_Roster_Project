#include <iostream>
#include <iomanip>
#include "student.h"

using std::cout;
using std::left;
using std::setw;

Student::Student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->email = "";
    this->age = 0;
}