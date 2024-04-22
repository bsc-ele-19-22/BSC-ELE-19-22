#include <iostream>

using namespace std;

int main() {

     int number;
        cout << "Enter any number betweem 5 and 10 \n";
        cin >> number;

    while ( !( number > 5 && number < 10))
        {
            cout << "Sorry you entered an invalid number " << number;
            cout << " please try again \n\n";

            cout << "Enter any number betweem 5 and 10 \n";
            cin >> number;
        }   

        cout << "Your input value (" << number;
        cout << ") has been accepted.";

       return 0;
    }