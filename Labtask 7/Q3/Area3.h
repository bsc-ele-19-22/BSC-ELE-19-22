#ifndef AREA_H
#define AREA_H

#include "square3.h"
#include "Triangle3.h"
#include "Circle3.h"

class Area {
    public:
        static double calculateArea(shapes::square& square);
        static double calculateArea(shapes::Triangle& triangle);
        static double calculateArea(shapes::Circle& circle);
};
#endif