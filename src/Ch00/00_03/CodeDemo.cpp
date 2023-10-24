// Learning C++ 
// Exercise 00_03
// Using the exercise files on GitHub, by Eduardo Corpeño 

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    result = operand_1 + operand_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
	
    std::cout << std::endl << std::endl;
    return (0);
}
