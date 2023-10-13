// Learning C++ 
// Challenge Solution 06_04
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <fstream>
#include <vector>
#include "records.h"

using namespace std;

void initialize();
void initialize(ifstream&);

StudentRecords SR;
int id;
ifstream inFile;
ofstream outFile;

int main(){
	initialize(inFile);       // initialize();
	SR.report_file(outFile);  // SR.report_card(1,std::cout);
	return (0);
}

void initialize(ifstream& inFile){
	string str, name;
	int sid, cid;
	unsigned char credits;
	char grade;
	int count = 0;

	inFile.open("students.txt");
	if (inFile.fail())
		std::cout << std::endl << "File students.txt not found!" << std::endl;
	else{
		while (!inFile.eof()){
			getline(inFile, str);
			sid = stoi(str);
			getline(inFile, name);
			SR.add_student(sid, name);
			count++;
		}
		inFile.close();
		std::cout << "Found " << count << " students" << std::endl;
	}
	
	count = 0;
	inFile.open("courses.txt");
	if (inFile.fail())
		std::cout << std::endl << "File courses.txt not found!" << std::endl;
	else{
		while (!inFile.eof()){
			getline(inFile, str);
			cid = stoi(str);
			getline(inFile, name);
			getline(inFile, str);
			credits = stoi(str);
			SR.add_course(cid, name, credits);
			count++;
		}
		inFile.close();
		std::cout << "Found " << count << " courses" << std::endl;
	}

	count = 0;
	inFile.open("grades.txt");
	if (inFile.fail())
		std::cout << std::endl << "File grades.txt not found!" << std::endl;
	else{
		while (!inFile.eof()){
			getline(inFile, str);
			sid = stoi(str);
			getline(inFile, str);
			cid = stoi(str);
			getline(inFile, str);
			grade = str[0];
			SR.add_grade(sid, cid, grade);
			count++;
		}
		inFile.close();
		std::cout << "Found " << count << " grades" << std::endl;
	}
}

void initialize(){
	SR.add_student(1, "George P. Burdell");
	SR.add_student(2,"Nancy Rhodes");

	SR.add_course(1, "Algebra", 5);
	SR.add_course(2, "Physics", 4);
	SR.add_course(3, "English", 3);
	SR.add_course(4,"Economics",4);

	SR.add_grade(1, 1, 'B');
	SR.add_grade(1, 2, 'A');
	SR.add_grade(1, 3, 'C');
	SR.add_grade(2, 1, 'A');
	SR.add_grade(2, 2, 'A'); 
	SR.add_grade(2, 4, 'B');
}