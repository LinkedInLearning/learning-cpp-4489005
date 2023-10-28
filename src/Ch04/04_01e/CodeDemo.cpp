// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1023;
    bool flag = false;
    char letter = 'd';

    if (a > 1000)
        std::cout << "Warning: a is over 1000." << std::endl;

    if (a % 2)
        std::cout << "a is odd" << std::endl;
    else
        std::cout << "a is even" << std::endl;

    std::cout << "The letter " << letter << " is ";
    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' &&
        letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
        std::cout << "not ";
    std::cout << "a vowel." << std::endl;

    if (flag)
        std::cout << "The flag is true!" << std::endl;
	
    std::cout << std::endl << std::endl;
    return (0);
}
