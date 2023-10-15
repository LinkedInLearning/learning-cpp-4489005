// Learning C++ 
// Exercise 02_09
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt = -7.44f;
    int32_t sgn;
    uint32_t unsgn;

    sgn = flt;
    unsgn = sgn;

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << (float) sgn << std::endl;
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;

    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;

    return (0);
}











