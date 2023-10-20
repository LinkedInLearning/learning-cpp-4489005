// Learning C++ 
// Challenge Solution 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
	int nums[5] = {1,23,32,24,337};
	float result; 

	result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
	result /= 5;
	
	std::cout << "The average is " << result << std::endl;
	return (0);
}
