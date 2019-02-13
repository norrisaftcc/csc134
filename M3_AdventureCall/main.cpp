#include <iostream>

using namespace std;

/*
Adventure (function) call version 1.1

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
bool firstPlay = true;
bool hasKey = false;


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

}

/*
Inside Shack - win condition
*/
void insideShack() {

}
