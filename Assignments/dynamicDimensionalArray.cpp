#include <iostream>
#include <iomanip>
using namespace std;

void assign(double **P, int rowSize, int columnSize);
void print(double **P, int rowSize, int columnSize);

int main() {
    double **sea;
    int rows, columns;


        // Input dimensions from the user
    cout << "\nEnter the number of rows of maximum 3: \n";
    cin >> rows;
    cout << "\nEnter the number of columns of maximum 3: \n";
    cin >> columns;

    // Check if dimensions exceed 3
    while(rows > 3 || columns > 3 || rows <= 0 || columns <= 0) {
        cout << "Invalid dimensions. Please enter dimensions between 1 and 3." << endl;

        cout << "\nEnter the number of rows of maximum 3: \n";
    cin >> rows;
    cout << "\nEnter the number of columns of maximum 3: \n";
    cin >> columns;
     }

    // creating the rows of sea
    sea = new double* [rows]; 

    //creating the columns of sea
    for (int row = 0; row < rows; row++) {
        sea[row] = new double[columns]; 
    }   

    // assigning values of each of element in the array
    assign(sea, rows, columns);
    
    // printing the values of array elements
    cout << "The values of each elements of the array are: \n";
    print(sea, rows, columns);

    delete sea;
    sea = 0;   
    
    return 0;
}

void assign(double **P, int rowSize, int columnSize) {
    for (int row = 0; row < rowSize; row++) {
        cout << "\nEnter " << columnSize << " number(s) for row " << "number " << row + 1 << ": ";
            for (int col = 0; col < columnSize; col++) {
                cin >> P[row][col];
                cout << endl; 
                }
    }
}

void print(double **P, int rowSize, int columnSize) {
    for (int row = 0; row < rowSize; row++) {
            for (int col = 0; col < columnSize; col++) 
                 cout << setw(4) << P[row][col] << " ";
                 cout << endl;
    }
}