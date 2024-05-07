#include "Circle3.h"

namespace shapes {
    Circle::Circle() {
        radius = 0.0;
    }

    Circle::Circle(double r) {
        radius = r;
    }

    Circle::~Circle() {
        // empty destructor 
    }

    void Circle::setRadius(double r) {
        radius = r;
    }

    double Circle::getRadius() {
        return radius;
    }
}
