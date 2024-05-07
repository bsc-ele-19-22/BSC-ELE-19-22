#include <iostream>
#include "rectangle1.h"

using namespace std;

int main() {
    Rectangle Rectangle;

    float length;
    float width;

    cout << "\nEnter the length of a rectangle: ";
    cin >> length;
    Rectangle.setLength(length);

    cout << "\nEnter the width of a rectangle: ";
    cin >> width;
    Rectangle.setWidth(width);

    cout << "\nThe area of a rectangle is: " << Rectangle.areaOfRectangle(length , width) << endl;

    return 0;
}