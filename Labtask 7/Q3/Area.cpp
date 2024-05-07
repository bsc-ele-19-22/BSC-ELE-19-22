#include "Area3.h"
#include <cmath>

double Area::calculateArea(shapes::square& square) {
    return square.getSideLength() * square.getSideLength();
}

double Area::calculateArea(shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateArea(shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}