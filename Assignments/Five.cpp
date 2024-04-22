#include <iostream>

using namespace std;

double square(double side) {
    return side * side;
}

double rectangle(double length, double width) {
    return length * width; 
}

double triangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {

    while (true) {
        
         cout << "Please select area of the shape to calculate. \n";
         cout << " 1. Square \n";
         cout << " 2. Rectangle \n";
         cout << " 3. Triangle \n";
         cout << " 4. Quit program \n \n";
         cout << "Enter your selection \n";

         int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << square(side) << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << rectangle(length, width) << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << triangle(base, height) << endl;
                break;
            }
            case 4:
                cout << "Exiting program. Goodbye! \n";
                return 0;
            default:
                cout << "Your input was: " << choice;
                cout << " which is an invalid. Please enter a valid input!!! \n\n";
                break;
        }
    }

return 0;
}