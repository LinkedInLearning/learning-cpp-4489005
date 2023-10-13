// Learning C++ 
// Exercise 03_04
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int a = 37;
int *ptr;
cow *my_cow;

int main(){
    ptr = &a;

    cout << "           The content of a is " << a << std::endl;
    cout << "    ptr is pointing to address " << ptr << std::endl;
    cout << "           The address of a is " << &a << std::endl;
    cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    cout << "         The address of ptr is " << &ptr << std::endl;
    cout << std::endl;

    my_cow = new cow("Gertie",3,hide);
    cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << std::endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    delete my_cow;
    return (0);
}






