#pragma once

#include <vector>
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

class StudentRecords{
private:
	std::vector<Student> students;
	std::vector<Course> courses;
	std::vector<Grade> grades;

	float get_num_grade(char);
	
public:
	void add_student(int, std::string);
	void add_course(int, std::string, unsigned char);
	void add_grade(int, int, char);

	std::string get_student_name(int);
	unsigned char get_course_credits(int);
	float get_GPA(int);
};
