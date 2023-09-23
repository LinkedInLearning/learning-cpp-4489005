#include "records.h"

using namespace std;

Student::Student(int the_id, string the_name){
	id = the_id;
	name = the_name;
}
int Student::get_id(){
	return id;
}
string Student::get_name(){
	return name;
}

Course::Course(int the_id, string the_name, unsigned char the_credits){
	id = the_id;
	name = the_name;
	credits = the_credits;
}
int Course::get_id(){
	return id;
}
string Course::get_name(){
	return name;
}
int Course::get_credits(){
	return credits;
}


Grade::Grade(int sid, int cid, char grd){
	student_id = sid;
	course_id = cid;
	grade = grd;
}
int Grade::get_student_id(){
	return student_id;
}
int Grade::get_course_id(){
	return course_id;
}
char Grade::get_grade(){
	return grade;
}

void StudentRecords::add_student(int sid, string sname){
	students.push_back(Student(sid, sname));
}

void StudentRecords::add_course(int cid, string cname, unsigned char ccredits){
	courses.push_back(Course(cid, cname, ccredits));
}

void StudentRecords::add_grade(int sid, int cid, char grade){
	grades.push_back(Grade(sid, cid, grade));
}

float StudentRecords::get_num_grade(char letter){}

string StudentRecords::get_student_name(int sid){}

unsigned char StudentRecords::get_course_credits(int cid){}

float StudentRecords::get_GPA(int sid){}

