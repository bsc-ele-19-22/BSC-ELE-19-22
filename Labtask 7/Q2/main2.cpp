#include <iostream>
#include "rectangle2.h"

using namespace std;

int main() {
    Rectangle firstRectangle;

    float length;
    float width;

    cout << "\nEnter length of the first rectangle: ";
    cin >> length;
    firstRectangle.setLength(length);

    cout << "\nEnter width of the first rectangle: ";
    cin >> width;
    firstRectangle.setWidth(width);

    cout << "\nArea of the first rectangle is: " << firstRectangle.areaOfRectangle(length , width) << endl;

    cout << "\nEnter length of the second rectangle: ";
    cin >> length;

    cout << "\nEnter width of the second rectangle: ";
    cin >> width;
    Rectangle secondRectangle(length, width);
    
    cout << "\nArea of the second rectangle is: " << secondRectangle.areaOfRectangle(length , width) << endl;
    return 0;
}