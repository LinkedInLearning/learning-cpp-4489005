// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i)
    {
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const
    {
        return name;
    }
    int get_age() const
    {
        return age;
    }
    cow_purpose get_purpose() const
    {
        return purpose;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main()
{
    cow my_cow( "Betsy",  5, cow_purpose::dairy);
   // my_cow.age = 5;
   // my_cow.name = "Betsy";
   //  my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
