#pragma once

#include <string>

class Student{
private:
	int id;
	std::string name;

public:
	Student(int the_id, std::string the_name);
	int get_id();
	std::string get_name();
};

class Course{
private:
	int id;
	std::string name;
	unsigned char credits;

public:
	Course(int the_id, std::string the_name, unsigned char the_credits);
	int get_id();
	std::string get_name();
	int get_credits();
};

class Grade{
private:
	int student_id;
	int course_id;
	char grade;

public:
	Grade(int sid, int cid, char grd);
	int get_student_id();
	int get_course_id();
	char get_grade();
};
