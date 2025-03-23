#ifndef VEHICLE_H
#define VEHICLE_H

#include "Drawable.h"

using namespace std;

/**
 * @brief Abstract base class for vehicles, derived from Drawable.
 */
class Vehicle : public Drawable {
public:
    /**
     * @brief Pure virtual function to drive the vehicle.
     */
    virtual void drive() const = 0;

    /**
     * @brief Virtual destructor for proper cleanup of derived classes.
     */
    virtual ~Vehicle() = default;
};

/**
 * @brief BMW class, derived from Vehicle.
 */
class BMW : public Vehicle {
public:
    /**
     * @brief Function to draw the BMW, overridden from Drawable.
     */
    void draw() const override;

    /**
     * @brief Function to drive the BMW, overridden from Vehicle.
     */
    void drive() const override;

    /**
     * @brief Destructor.
     */
    ~BMW() override = default;
};

/**
 * @brief Mazda class, derived from Vehicle.
 */
class Mazda : public Vehicle {
public:
    /**
     * @brief Function to draw the Mazda, overridden from Drawable.
     */
    void draw() const override;

    /**
     * @brief Function to drive the Mazda, overridden from Vehicle.
     */
    void drive() const override;

    /**
     * @brief Destructor.
     */
    ~Mazda() override = default;
};

#endif // VEHICLE_H

