// Learning C++ 
// Exercise 05_02
// Using Functions, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

using namespace std;

vector<Student> students = {Student(1,"George P. Burdell"),
							Student(2,"Nancy Rhodes")};

vector<Course> courses = {Course(1,"Algebra",5),
						  Course(2,"Physics",4),
						  Course(3,"English",3),
						  Course(4,"Economics",4)};

vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
						Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};

float GPA = 0.0f;
int id;

int main(){
	cout << "Enter a student ID: ";
	cin >> id;

	float points = 0.0f, credits = 0.0f;
	for (Grade& grd : grades)
		if (grd.get_student_id() == sid){
			// get numeric grade
			// calculate total credits and points
			// credits += get credits
			points += num_grd * courses[j].get_credits();
		}
	GPA = points / credits;

	// get student name
	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}
