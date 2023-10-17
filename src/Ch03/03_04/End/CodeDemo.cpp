// Learning C++ 
// Exercise 03_04
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    int a = 37;
    int *ptr;
    cow *my_cow;

    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    std::cout << std::endl;

    my_cow = new cow("Gertie",3,cow_purpose::hide);
    std::cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    delete my_cow;
    return (0);
}






