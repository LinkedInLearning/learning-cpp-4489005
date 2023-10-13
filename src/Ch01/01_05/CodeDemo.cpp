// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
	std::string str;
	std::cout << "Enter your name: ";
	std::cin >> str;
	std::cout << "Nice to meet you, " << str << "!" << std::endl;
	return (0);
}
