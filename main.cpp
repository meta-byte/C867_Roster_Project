#pragma once
#include <string>
using namespace std;

enum DegreeProgram
{
    SECURITY,
    NETWORK,
    SOFTWARE
};

static const std ::string degreeTypeStrings[] = {"SECURITY, NETWORK, SOFTWARE"};

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int days[3];

public:
    //constructor
    Student();
    Student(string, string, string, string, int, int *);

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
    void setAge(int age);
    void setDays(int);
    void setDegreeType(DegreeProgram);

    //destructor
    ~Student();
};