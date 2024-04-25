// preprocessor directives
#include <iostream>
#include <string>

int main() {
    // declaring pointers
    int* dynamicInt;
    std:: string* dynamicString; 

    // allocating an integer and a strind dynamically
    dynamicInt = new int;
    dynamicString = new std:: string;

    // prompt the user to enter values of integer and string
    std:: cout << "\nEnter a value for dynamic allocated integer: ";
    std:: cin >> *dynamicInt;

    std:: cout << "\nEnter a value for dynamic allocated string: ";
    std:: cin >> *dynamicString;

    std:: cout << "\nThe value of the dynamically allocated integer is: ";
    std:: cout << *dynamicInt;
    std:: cout << std:: endl;

    std:: cout << "\n\nThe value of the dynamically allocated string is: ";
    std:: cout << *dynamicString;

    // deallocating memory
    delete dynamicInt;
    delete dynamicString;

    return 0;

}