#pragma once

#ifndef COW_H
#define COW_H
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif // COW_H
