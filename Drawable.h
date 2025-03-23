#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <iostream>

using namespace std;

/**
 * @brief Base class for drawable objects.
 */
class Drawable {
public:
    /**
     * @brief Pure virtual function to draw the object.
     */
    virtual void draw() const = 0;

    /**
     * @brief Virtual destructor for proper cleanup of derived classes.
     */
    virtual ~Drawable() = default;
};

#endif // DRAWABLE_H

