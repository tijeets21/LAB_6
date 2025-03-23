#include "Shape.h"
#include <cmath>

using namespace std;

#ifndef M_PI
#define M_PI 3.14
#endif

// Rectangle implementation

/**
 * @brief Constructor to initialize width and height.
 * @param w Width of the rectangle.
 * @param h Height of the rectangle.
 */
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

/**
 * @brief Function to draw the rectangle.
 */
void Rectangle::draw() const {
    cout << "Drawing Rectangle with width " << width << " and height " << height << endl << endl;
    // ASCII art representation of a rectangle
    cout << "***************" << endl;
    cout << "*             *" << endl;
    cout << "*             *" << endl;
    cout << "*             *" << endl;
    cout << "***************" << endl << endl;
}

/**
 * @brief Function to calculate the area of the rectangle.
 * @return Area of the rectangle.
 */
double Rectangle::area() const {
    return width * height;
}

// Circle implementation

/**
 * @brief Constructor to initialize the radius.
 * @param r Radius of the circle.
 */
Circle::Circle(double r) : radius(r) {}

/**
 * @brief Function to draw the circle.
 */
void Circle::draw() const {
    cout << "Drawing Circle with radius " << radius << endl << endl;
    // ASCII art representation of a circle
    cout << "  * * * * *     " << endl;
    cout << " *         *" << endl;
    cout << "*           *" << endl;
    cout << " *         *" << endl;
    cout << "  * * * * *" << endl;
    cout << endl << endl;
}

/**
 * @brief Function to calculate the area of the circle.
 * @return Area of the circle.
 */
double Circle::area() const {
    return M_PI * radius * radius;
}
