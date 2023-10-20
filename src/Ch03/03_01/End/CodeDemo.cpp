// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = dairy;
    std::cout << my_cow.name << " is a type-" << my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
	
    std::cout << std::endl << std::endl;
    return (0);
}
