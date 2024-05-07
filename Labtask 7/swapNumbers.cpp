#include <iostream>

using namespace std;

void swap(int& x, int& y);

int main () {

int varA = 25;
int varB = 100;

cout << "Before swap, value of varA :" << varA << endl << endl;
cout << "Before swap, value of varB :" << varB << endl << endl;

swap(varA, varB);
cout << "After swap, value of varA :" << varA << endl << endl;
cout << "After swap, value of varB :" << varB << endl << endl;
return 0;
}

void swap(int& x, int& y) {

    int temp;
temp = x; 
x = y; 
y = temp;
return;
}