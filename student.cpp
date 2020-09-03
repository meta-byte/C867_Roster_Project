#include <string>
#include <iostream>
#include <iomanip>
#include "student.h"
using std::setw;

Student::Student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->email = "";
    this->age = "";
    for (int i = 0; i < daysSize; i++)
        this->days[i] = days[i];
    this->degreeProgram = SOFTWARE;
};

Student::Student(string studentID, string firstName, string lastName, string email, string age, int days[], DegreeProgram degree)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    for (int i = 0; i < daysSize; i++)
        this->days[i] = days[i];
    this->degreeProgram = degree;
};

string Student::getStudentID()
{
    return studentID;
};
string Student::getFirstName()
{
    return firstName;
};
string Student::getLastName()
{
    return lastName;
};
string Student::getEmail()
{
    return email;
};
string Student::getAge()
{
    return age;
};
int *Student::getDays()
{
    return days;
};
DegreeProgram Student::getDegree()
{
    return degreeProgram;
};

void Student::setStudentID(string studentID)
{
    this->studentID = studentID;
}

void Student::setFirstName(string firstName)
{
    this->firstName = firstName;
}
void Student::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Student::setEmail(string email)
{
    this->email = email;
}
void Student::setAge(string age)
{
    this->age = age;
}
void Student::setDays(int days[])
{
    for (int i = 0; i < daysSize; i++)
        this->days[i] = days[i];
}
void Student::setDegree(DegreeProgram degree)
{
    this->degreeProgram = degree;
}

void Student::print()
{
    cout << left << studentID << "\t " << firstName << "\t" << setw(10) << lastName << "\t" << email << "\t" << age << "\t" << days[0] << ", " << days[1] << ", " << days[2] << "\t " << setw(5) << degreeProgramStrings[getDegree()] << endl;
}

Student::~Student()
{
}