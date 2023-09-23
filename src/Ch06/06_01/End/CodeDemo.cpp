// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
string str;
int number;
char letter;

int main(){
    inFile.open("people.txt");
    if (inFile.fail())
        cout << endl << "File not found!" << endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            cout << str << ", ";
            getline(inFile,str);
            number = stoi(str);
            cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            cout << letter << endl;
        }
        inFile.close();
    }
    return (0);
}
