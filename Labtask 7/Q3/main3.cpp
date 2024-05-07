#include <iostream>
#include "Area3.h"
#include "square3.h"
#include "Triangle3.h"
#include "Circle3.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;

    do {
        cout << "\nChoose a shape to calculate its area: \n\n";
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit \n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1': {
                double side;
                cout << "\nEnter the side length of the square: ";
                cin >> side;
                square square(side);
                cout << "Area of the square is " << Area::calculateArea(square) << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "\nEnter the base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle is " << Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "\nEnter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle is " << Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program. \n" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while(choice != '4');

    return 0;
}