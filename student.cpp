#include <iostream>
#include "student.h"
#include "degree.h"
#include <string>

using namespace std;

student::student()
{
    this->StudentID = "";
    this->FirstName = "";
    this->LastName = "";
    this->Email = "";
    this->age = "";
}

// student::student()