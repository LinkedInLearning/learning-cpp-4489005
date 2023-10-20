// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

float operand_1, operand_2, result;
char operation;

int main(){
    std::cout << "Enter Operand 1: " << std::endl;
    std::cin >> operand_1;
    std::cout << "Enter Operand 2: " << std::endl;
    std::cin >> operand_2;
    std::cout << "Choose Operation: + - * /" << std::endl;
    std::cin >> operation;

    switch (operation){
    case '+':
        result = operand_1 + operand_2;
        break;
    case '-':
        result = operand_1 - operand_2;
        break;
    case '*':
        result = operand_1 * operand_2;
        break;
    case '/':
        result = operand_1 / operand_2;
        break;
    default:
        result = operand_1 + operand_2;
        break;
    }

    std::cout << "The result is " << result << std::endl;
	
    std::cout << std::endl << std::endl;
    return (0);
}
