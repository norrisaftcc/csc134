#include <iostream>

using namespace std;

/*
CSC 134
M3HW
Norris
2/14/19

Adventure (function) call version 1.1
Last updated 2/14/19

The goal is to escape the garden.

Version log:
1.1 Added additional rooms

This version uses recursion to handle looping back around
to try again. While loops could also be used (with changes)
*/

// Function prototypes
// list each room function here
void garden();
void gazebo();
void well();
void outsideShack();
void insideShack();

// list global variables here
// (we would rather not use globals
// but they'll work for now)
bool firstPlay = true; // is this first playthrough
bool hasKey = false;   // do they have the key?


int main()
{
    // this is probably more complex than needed

    char again;
    cout << "Welcome, traveler!" << endl;
    if (firstPlay) {
        cout << "Are you ready to begin your quest(y/n)? ";
    }
    else {
        cout << "Would you like to play again(y/n)? ";
    }
    cin >> again;
    if (again == 'y' || again == 'Y') {
        // start in garden
        garden();
        firstPlay = false;
        // loop back around to play again
        main();
    }
    else {
        cout << "Goodbye!" << endl;
    }

    return 0;
}


/*
Garden - leads to gazebo, shack, and well.
*/
void garden() {
    cout << "You are in the garden." << endl;
    cout << "A shack is to the EAST." << endl;
    cout << "there is a KEY here on the ground." << endl;
    string command;
    cin >> command;
    if (command == "east") {
        outsideShack();
    }
    else if (command == "key") {
        hasKey = true;
        garden();
    }
}


/*
Gazebo - leads back to garden.
*/
void gazebo() {

}

/*
Well - leads back to garden, or down to your doom.
*/
void well() {

}

/*
Outside Shack - leads back to garden or inside shack to victory
*/
void outsideShack() {
    string command;
    cout << "You are outside of a shack." << endl;
    cout << "You can return WEST to the garden." << endl;
    cout << "The DOOR is locked firmly." << endl;
    cin >> command;
    if (command == "door") {
        if (hasKey) {
            insideShack();
        }
        else {
            cout << "The door is locked." << endl;
        }
    }
}

/*
Inside Shack - win condition
*/
void insideShack() {
    cout << "The treasure is here -- you win!" << endl;
}
