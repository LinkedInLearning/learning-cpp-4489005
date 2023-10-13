// Learning C++ 
// Exercise 03_03
// Header and Implementation Files, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
    cow_purpose get_purpose(){
        return purpose;
    }
    void set_age(int new_age){
        age = new_age;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hildy",7,pet);
    std::cout << my_cow.get_name() << " is a type-" << my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    return (0);
}
