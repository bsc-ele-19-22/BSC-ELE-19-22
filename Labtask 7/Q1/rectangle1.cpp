#include "rectangle1.h"

Rectangle:: Rectangle(void)  {
    length = 0.0f;
    width = 0.0f;
}

Rectangle:: ~Rectangle(void) {
    // empty because it does nothing
}

float Rectangle:: getLength(void) {
    return length;
}

void Rectangle:: setLength(float len) {
    length = len;
}

float Rectangle:: getWidth(void) {
     return width;
}

void Rectangle:: setWidth(float wid) {
    width = wid;
}

float Rectangle:: areaOfRectangle(float x, float y) {
    return x * y;
}