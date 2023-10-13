// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

ofstream outFile;
float a = 4.333f, b = 5.302f;

int main(){
    outFile.open("calculations.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        outFile << "a = " << a << std::endl;
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        outFile.close();
        std::cout << "File written successfully!" << std::endl;
    }
    return (0);
}
