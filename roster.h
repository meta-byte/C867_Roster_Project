#pragma once
#include <string>
#include <iostream>
#include "student.h"

class Roster
{
private:
    int lastIndex;
    int capacity;
    Student **classRosterArray;

public:
    Roster();
    Roster(int capacity);

    void parseThenAdd(string row);
    void printAll();
    bool remove(string studentID);
    void printAverageDays(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degree);

    ~Roster();
};