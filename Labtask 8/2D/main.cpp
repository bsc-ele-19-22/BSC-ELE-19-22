#include <iostream>
#include "Person.h"

using namespace std;

int  main()	{
    Person Jane	=  Person("Jane",	60.0f);
    Person John	= Person("John",	75.0f);

    float totalWeight	=  Jane	+  John;

    cout << "Total weight: " << totalWeight << endl;

    if (Jane == John) {
        cout << "\nThis is the same person" << endl;
    }

    if (Jane != John) {
        cout << "\nThis is NOT the same person" << endl;
    }
    return 0;
}