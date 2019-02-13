// csc 134
// m2lab3 - grade calculator
// norrisa
// 1/31/19

#include <iostream>

using namespace std;

int main()
{
    /*
    This program will calculate letter grades
    given a number grade.
    Additions:
    - enter 3 grades each run
    - re-enter invalid grades (done)
    */

    /*
    for (int i=1; i<4; i++) {
        cout << "I can count to " << i << endl;
    }
    */
    float numberGrade;
    char letterGrade;
    bool isValid = false;

    cout << "Grade Entry Program" << endl;

    // user will enter three test grades
    for (int testNum = 1; testNum < 4; testNum++) {
        cout << "Enter grade for test #" << testNum << endl;

        // ask the user for number grade
        // must be > 0 and no greater than 100

        while (false == isValid) {
            cout << "Enter number grade" << endl;
            cin >> numberGrade;
            if (numberGrade > 0 && numberGrade <= 100) {
                // grade is good, continue
                isValid = true;
            }
            else {
                cout << "Invalid number, try again." << endl;
            }
        }

        // convert to letter grade
        if (numberGrade >= 90) {
            letterGrade = 'A';
        }
        else if (numberGrade >= 80) {
            letterGrade = 'B';
        }
        else if (numberGrade >= 70) {
            letterGrade = 'C';
        }
        else if (numberGrade >= 60) {
            letterGrade = 'D';
        }
        else {
            letterGrade = 'F';
        }


        // tell them the letter grade
        cout << "Letter grade " << testNum << " is: " << letterGrade;
    }
    return 0;
}
