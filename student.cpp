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
    this->days[0, 0, 0];
    this->degreeProgram = SOFTWARE;
};

Student::Student(string studentID, string firstName, string lastName, string email, int age, int days[], DegreeProgram degree)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->degreeProgram = degree;
    for (int i = 0; i < 3; i++)
        this->days[i] = days[i];
};

string Student::getStudentId()
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
int Student::getAge()
{
    return age;
};
int Student::getDays()
{
    return days[3];
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
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setDays(int days[])
{
    for (int i = 0; i < 3; i++)
        this->days[i] = days[i];
}
void Student::setDegree(DegreeProgram degree)
{
    this->degreeProgram = degree;
}

void ::Student::print()
{
    cout << left << setw(5) << studentID;
    cout << left << setw(45) << firstName;
    cout << left << setw(45) << lastName;
    cout << left << setw(45) << email;
    cout << left << setw(10) << age;
    cout << left << setw(10) << days[0];
    cout << left << setw(10) << days[1];
    cout << left << setw(10) << days[2];
    cout << left << setw(20) << degreeProgramStrings[getDegree()];
}

Student::~Student()
{
}