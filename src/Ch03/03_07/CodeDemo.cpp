// Learning C++ 
// Challenge 03_06
// Create some Classes, by Eduardo Corpeño 

#include <iostream>
#include "records.h"

Student my_student(1,"Hilda Jones");
Course my_course(7,"Physics 101",3);
Grade my_grade(1,7,'B');

int main(){
	std::cout << "Student: " << my_student.get_name() << std::endl;
	std::cout << "Course: " << my_course.get_name() << std::endl;
	std::cout << "Credits: " << my_course.get_credits() << std::endl;
	std::cout << "Grade: " << my_grade.get_grade() << std::endl;
	return (0);
}
