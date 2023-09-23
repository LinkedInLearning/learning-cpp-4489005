// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

using namespace std;

float operand_1, operand_2, result;
char operation;

int main(){
    cout << "Enter Operand 1: " << endl;
    cin >> operand_1;
    cout << "Enter Operand 2: " << endl;
    cin >> operand_2;
    cout << "Choose Operation: + - * /" << endl;
    cin >> operation;

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

    cout << "The result is " << result << endl;
    return (0);
}








