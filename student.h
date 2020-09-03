#include <string>
#include <iostream>
#include "degree.h"
using namespace std;

class Student
{
public:
    const static int daysSize = 3;

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    string age;
    int days[daysSize];
    DegreeProgram degreeProgram;

public:
    //constructor
    Student();
    Student(string studentID, string firstName, string lastName, string email, string age, int days[], DegreeProgram degree);

    //get
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    string getAge();
    int *getDays();
    DegreeProgram getDegree();

    //set
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(string age);
    void setDays(int days[]);
    void setDegree(DegreeProgram degree);

    void print();

    //destructor
    ~Student();
};