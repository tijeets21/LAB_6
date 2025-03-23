#ifndef SHAPE_H
#define SHAPE_H

#include "Drawable.h"

using namespace std;

/**
 * @brief Rectangle class, derived from Drawable.
 */
class Rectangle : public Drawable {
private:
    double width, height; ///< Width and height of the rectangle

public:
    /**
     * @brief Constructor to initialize width and height.
     * @param w Width of the rectangle.
     * @param h Height of the rectangle.
     */
    Rectangle(double w, double h);

    /**
     * @brief Function to draw the rectangle, overridden from Drawable.
     */
    void draw() const override;

    /**
     * @brief Function to calculate the area of the rectangle.
     * @return Area of the rectangle.
     */
    double area() const;

    /**
     * @brief Destructor.
     */
    ~Rectangle() override = default;
};

/**
 * @brief Circle class, derived from Drawable.
 */
class Circle : public Drawable {
private:
    double radius; ///< Radius of the circle

public:
    /**
     * @brief Constructor to initialize the radius.
     * @param r Radius of the circle.
     */
    Circle(double r);

    /**
     * @brief Function to draw the circle, overridden from Drawable.
     */
    void draw() const override;

    /**
     * @brief Function to calculate the area of the circle.
     * @return Area of the circle.
     */
    double area() const;

    /**
     * @brief Destructor.
     */
    ~Circle() override = default;
};

#endif // SHAPE_H

