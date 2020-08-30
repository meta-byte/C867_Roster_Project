#pragma once
#include <string>
#include <iostream>
#include "degree.h"
using namespace std;

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int days[3];
    DegreeProgram degreeProgram;

public:
    //constructor
    Student();
    Student(string studentID, string firstName, string lastName, string email, int age, int days[], DegreeProgram degree);

    //get
    string getStudentId();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int getDays();
    DegreeProgram getDegree();

    //set
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDays(int days[]);
    void setDegree(DegreeProgram);

    void print();

    //destructor
    ~Student();
};