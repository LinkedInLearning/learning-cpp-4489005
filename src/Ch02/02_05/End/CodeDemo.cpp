// Learning C++ 
// Exercise 02_05
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG

using namespace std;

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    cout << "[About to perform the addition]" << endl;
#endif
    large += small; // shorthand for large = large + small
    cout << "The large integer is " << large << endl;
    return (0);
}














