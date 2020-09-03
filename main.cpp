#include "roster.h"
using namespace std;

int numberSudents = 5;
static string studentData[5] =

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Andrew,Howard,ahow146@my.wgu.edu,27,21,14,60,SOFTWARE"};

int main()
{
    cout << endl;
    cout << "____________________________________________________________________________________________________________________" << endl;
    cout << "Printing program header:" << endl;
    cout << endl;
    cout << "C867 - Scripting and Programming Applications" << endl;
    cout << "C++" << endl;
    cout << "Andrew Howard" << endl;
    cout << "001017116" << endl;

    Roster *classRoster = new Roster(numberSudents);

    for (int i = 0; i < numberSudents; i++)
    {
        classRoster->parseThenAdd(studentData[i]);
    }

    classRoster->printAll();

    classRoster->printInvalidEmails();

    cout << endl;
    cout << "____________________________________________________________________________________________________________________" << endl;
    cout << "Printing average days to complete a course: " << endl;
    cout << endl;

    for (int i = 1; i <= numberSudents; i++)
    {
        classRoster->printAverageDays("A" + std::to_string(i));
    }

    classRoster->printByDegreeProgram(SOFTWARE);

    classRoster->remove("A3");

    classRoster->printAll();

    classRoster->remove("A3");

    classRoster->~Roster();
}
