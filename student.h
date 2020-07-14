#pragma once
#include <string>
#include "degree.h"
using namespace std;

class student
{
private:
    string StudentID;
    string FirstName;
    string LastName;
    string Email;
    int age;
    int Days[3];

public:
    //constructor
    student(/* args */);
    ~student();

    //get
    string getStudentId();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int getDays();
    DegreeProgram getDegreeType();

    //set
    void setStudentID(string);
    void setFirstName(string);
    void setLastName(string);
    void setEmail(string);
    void setAge(int);
    void setDays(int[3]);
    void setDegreeType(DegreeProgram);

    //destructor
    ~student();
};
