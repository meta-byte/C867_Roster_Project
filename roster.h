#pragma once
#include <string>
#include <iostream>
#include "student.h"

class Roster
{
private:
    int lastIndex;
    int capacity;
    Student **students;

public:
    Roster();
    Roster(int capacity);

    Student *getStudentAt(int index);
    void parseThenAdd(string datarow);
    void print_All();
    bool remove(string studentID);
    void printAverageDays(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degree);
    ~Roster();
};