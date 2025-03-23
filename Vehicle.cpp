#include "Vehicle.h"
#include <iostream>

using namespace std;

// BMW implementation

/**
 * @brief Function to draw the BMW.
 */
void BMW::draw() const {
    cout << endl << "Drawing BMW car" << endl;
    // ASCII art representation of a BMW car
    cout << "              ______________ " << endl;
    cout << "             /      ||      | " << endl;
    cout << "        ____/_______||______|______ " << endl;
    cout << "     __|      ___        ___       ||" << endl;
    cout << "     --|_____| . |______| . |______||" << endl << endl;
}

/**
 * @brief Function to simulate driving a BMW.
 */
void BMW::drive() const {
    cout << endl << "Driving a BMW" << endl;
}

// Mazda implementation

/**
 * @brief Function to draw the Mazda.
 */
void Mazda::draw() const {
    cout << "Drawing Mazda car" << endl;
    // ASCII art representation of a Mazda car
    cout << "              ______________ " << endl;
    cout << "             /      ||      | " << endl;
    cout << "        ____/_______||______|______ " << endl;
    cout << "     __|      ___        ___       ||" << endl;
    cout << "     --|_____| . |______| . |______||" << endl << endl;
}

/**
 * @brief Function to simulate driving a Mazda.
 */
void Mazda::drive() const {
    cout << "Driving a Mazda" << endl << endl;
}
