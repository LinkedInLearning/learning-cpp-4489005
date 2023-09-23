// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ofstream outFile;
float a = 4.333f, b = 5.302f;

int main(){
    outFile.open("calculations.txt");
    if (outFile.fail())
        cout << endl << "Couldn't open the file!" << endl;
    else{
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;
        outFile.close();
        cout << "File written successfully!" << endl;
    }
    return (0);
}
