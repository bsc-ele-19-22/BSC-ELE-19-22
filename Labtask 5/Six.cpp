#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string Reverse(string word){
    char statement [word.length()]; 
    int j = 0;
    for (int i = word.length() - 1; i >= 0; i--)
    {
        if (j < word.length())
        {
            statement[j] = word[i];
            j++;
        }        
    }

    string reversed;
    reversed.assign(statement);
    
    return reversed;

}

int main(){
    ifstream file("abcd.txt");
    string fileData;

    if (file.is_open()){
        getline(file, fileData);
        file.close();
    }
    else{
        cout << "file is open in another program";
    }

    int vowels = 0;

    for (int i = 0; i < fileData.length(); i++)
    {
        if (fileData[i] == 'a' | fileData[i] == 'e' | fileData[i] == 'i' | fileData[i] == 'o' | fileData[i] == 'u' |
            fileData[i] == 'A' | fileData[i] == 'E' | fileData[i] == 'I' | fileData[i] == 'O' | fileData[i] == 'U'){
            vowels++;
        }
    }

    cout << "\nNumber of vowels is: ";
    cout << vowels;


    int numberOfWords = 1;
    for (int i = 0; i < fileData.length(); i++)
    {
        if (fileData[i] == ' '){
            numberOfWords++;
        }
    }
    cout << "\n\nNumber of words is: ";
    cout << numberOfWords;


    cout << "\n\nReversed word is: ";
    cout << Reverse(fileData);

    cout << "\n\nCapitalized second word statement is: \n";
    // cout << Capitalise(fileData);
    
    
}