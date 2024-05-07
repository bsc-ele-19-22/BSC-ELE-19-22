#include "square3.h"

namespace shapes {
    square::square() {
        sideLength = 0.0;
    }

    square::square(double side) {
        sideLength = side;
    }

    square::~square() {
        // empty distructor
    }

    void square::setSideLength(double side) {
        sideLength = side;
    }

    double square::getSideLength() {
        return sideLength;
    }
}