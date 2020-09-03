#include <iostream>
#include <iomanip>
#include <string>
#include "roster.h"
using std::cerr;
using std::cout;

const int numberStudents = 5;
string studentData[numberStudents] =

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Andrew,Howard,ahow146@my.wgu.edu,27,21,14,60,SOFTWARE"};

Roster::Roster()
{
    this->capacity = 0;
    this->lastIndex = -1;
    this->classRosterArray = nullptr;
}

Roster::Roster(int capacity)
{
    this->capacity = capacity;
    this->lastIndex = -1;
    this->classRosterArray = new Student *[capacity];
}

void Roster::parseThenAdd(string row)
{
    if (lastIndex < capacity)
    {
        lastIndex++;

        int daysArray[Student::daysSize];

        if (row.back() == 'Y')
        {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegree(SECURITY);
        }
        else if (row.back() == 'K')
        {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegree(NETWORK);
        }
        else if (row.back() == 'E')
        {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegree(SOFTWARE);
        }
        else
        {
            cerr << "INVALID DEGREE TYPE!" << endl;
            exit(-1);
        }

        int rhs = studentData[lastIndex].find(",");
        classRosterArray[lastIndex]->setStudentID(studentData[lastIndex].substr(0, rhs));

        int lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setFirstName(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setLastName(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setEmail(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setAge(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        daysArray[0] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        daysArray[1] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        daysArray[2] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));

        classRosterArray[lastIndex]->setDays(daysArray);
    }
    else
    {
        cerr << "IT'S OVER NINE THOUSAND!" << endl;

        exit(-1);
    }
}

void Roster::printAll()
{
    cout << endl;
    cout << "____________________________________________________________________________________________________________________" << endl;
    cout << "Printing all students:" << endl;
    cout << endl;

    for (int i = 0; i <= lastIndex; i++)
        (this->classRosterArray)[i]->print();
}

bool Roster::remove(string studentID)
{
    cout << endl;
    cout << "removing student: " << studentID << endl;

    bool found = false;
    for (int i = 0; i <= lastIndex; i++)
    {
        if (this->classRosterArray[i]->getStudentID() == studentID)
        {
            found = true;
            delete this->classRosterArray[i];
            this->classRosterArray[i] = this->classRosterArray[lastIndex];
            lastIndex--;
        }
    }
    if (!found)
        cout << "STUDENT NOT FOUND!" << endl;
    return found;
}

void Roster::printAverageDays(string studentID)
{
    bool found = false;
    for (int i = 0; i <= lastIndex; i++)
    {
        if (this->classRosterArray[i]->getStudentID() == studentID)
        {
            found = true;
            int *day = classRosterArray[i]->getDays();
            cout << "The average number of days for student " << studentID << " to complete a class is " << (day[0] + day[1] + day[2]) / 3 << "." << endl;
        }
    }
    if (!found)
        cout << "STUDENT NOT FOUND!" << endl;
}

void Roster::printInvalidEmails()
{
    cout << endl;
    cout << "____________________________________________________________________________________________________________________" << endl;
    cout << "Printing invalid emails:" << endl;
    cout << endl;

    for (int i = 0; i <= lastIndex; i++)
    {
        string invalidEmail = classRosterArray[i]->getEmail();

        for (int j = 0; j < classRosterArray[i]->getEmail().length(); j++)
        {
            if (invalidEmail[j] == ' ')
            {
                cout << '"' << invalidEmail << '"' << " is not a valid email!\n";
            }
        }
        if (invalidEmail.find("@") == string::npos || invalidEmail.find(".") == string::npos)
        {
            cout << classRosterArray[i]->getEmail() << " is not a valid email!" << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degree)
{
    cout << endl;
    cout << "____________________________________________________________________________________________________________________" << endl;
    cout << "Printing all " << degreeProgramStrings[degree] << " students:" << endl;
    cout << endl;

    for (int i = 0; i <= lastIndex; i++)
    {
        if (classRosterArray[i]->getDegree() == degree)
        {
            classRosterArray[i]->print();
        }
    }
}

Roster::~Roster()
{
    for (int i = 0; i <= lastIndex; i++)
    {
        delete this->classRosterArray[i];
    }
    delete classRosterArray;
    cout << endl;
    cout << "Exiting" << endl;
    cout << endl;
}