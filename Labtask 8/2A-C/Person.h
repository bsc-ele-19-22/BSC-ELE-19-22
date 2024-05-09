#pragma once

#include 	<string>
using namespace  std;

class  Person {
    public:
        Person();
        Person(string newName, float  newWeight);

        ~Person();
        //Overload the add  operator
        float operator + (const  Person& otherPerson);

    private:
        float mWeight;
        string mFirstName; 
        int  mAge;
};