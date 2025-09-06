// Learning C++ 
// Exercise 00_03 with modifications
// Using the exercise files on GitHub, by Eduardo Corpeño 

#include <iostream>

int main(){
    float num_1, num_2, result;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    
    result = num_1 + num_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
