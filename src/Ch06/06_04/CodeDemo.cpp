// Learning C++ 
// Challenge Solution 06_04
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <fstream>
#include <vector>
#include "records.h"

void initialize(StudentRecords&);
void initialize(StudentRecords&, std::ifstream&);

int main(){
    StudentRecords SR;
    int id;
    std::ifstream inFile;
    std::ofstream outFile;

    initialize(SR, inFile);   // initialize(SR);
    SR.report_file(outFile);  // SR.report_card(1, std::cout);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec, std::ifstream& inFile){
    std::string str, name;
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
            srec.add_student(sid, name);
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
            srec.add_course(cid, name, credits);
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
            srec.add_grade(sid, cid, grade);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " grades" << std::endl;
    }
}

void initialize(StudentRecords& srec){
    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A'); 
    srec.add_grade(2, 2, 'A');
    srec.add_grade(2, 4, 'B');
}
