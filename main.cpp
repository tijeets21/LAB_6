#include <iostream>
#include <vector>
#include "Shape.h"
#include "Vehicle.h"

using namespace std;

/**
 * @brief Function to draw any drawable object.
 * @param obj Drawable object to be drawn.
 */
void drawAnything(const Drawable& obj) {
    obj.draw();
}

/**
 * @brief Function to drive any vehicle.
 * @param obj Vehicle object to be driven.
 */
void driveAnything(const Vehicle& obj) {
    obj.drive();
}

/**
 * @brief Function to calculate the total area of shapes in a vector.
 * @param shapes Vector of pointers to Drawable objects.
 * @return Total area of all shapes in the vector.
 */
double getTotalArea(const vector<Drawable*>& shapes) {
    double totalArea = 0.0;
    for (const auto& shape : shapes) {
        // Check if the shape is a Rectangle and calculate its area
        if (dynamic_cast<const Rectangle*>(shape)) {
            totalArea += dynamic_cast<const Rectangle*>(shape)->area();
        }
            // Check if the shape is a Circle and calculate its area
        else if (dynamic_cast<const Circle*>(shape)) {
            totalArea += dynamic_cast<const Circle*>(shape)->area();
        }
    }
    return totalArea;
}

int main() {
    int choice; // Variable to store user choice
    vector<Drawable*> shapes; // Vector to store shapes
    Rectangle rect1(15.0, 5.0); // Create a rectangle with width 15.0 and height 5.0
    Rectangle rect2(10.0, 3.0); // Create a rectangle with width 10.0 and height 3.0
    Circle circle1(5.0); // Create a circle with radius 5.0
    Circle circle2(7.0); // Create a circle with radius 7.0
    BMW bmw; // Create a BMW object
    Mazda mazda; // Create a Mazda object

    // Add shapes to the vector
    shapes.push_back(&rect1);
    shapes.push_back(&rect2);
    shapes.push_back(&circle1);
    shapes.push_back(&circle2);

    do {
        // Display menu options
        cout << "--- Menu ---" << endl << endl;
        cout << "1. Draw a car" << endl;
        cout << "2. Drive a car" << endl;
        cout << "3. Draw a shape" << endl;
        cout << "4. Calculate area of shapes" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice; // Get user input

        switch (choice) {
            case 1:
                // Draw both cars (BMW and Mazda)
                drawAnything(bmw);
                drawAnything(mazda);
                break;
            case 2:
                // Drive both cars (BMW and Mazda)
                driveAnything(bmw);
                driveAnything(mazda);
                break;
            case 3:
                // Draw shapes (rectangle and circle)
                cout << "Drawing shapes:" << endl;
                for (auto shape : shapes) {
                    drawAnything(*shape);
                }
                break;
            case 4:
                // Calculate and display the total area of shapes
                if (!shapes.empty()) {
                    double totalArea = getTotalArea(shapes);
                    cout << endl << "Total area of shapes: " << totalArea << endl << endl;
                } else {
                    cout << "No shapes to calculate area." << endl;
                }
                break;
            case 5:
                // Exit the program
                cout << "Exiting program." << endl;
                break;
            default:
                // Handle invalid input
                cout << "Invalid choice. Please enter a number from 1 to 5." << endl;
                break;
        }

    } while (choice != 5); // Loop until the user chooses to exit

    return 0;
}

