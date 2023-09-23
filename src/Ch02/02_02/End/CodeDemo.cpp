// Learning C++ 
// Exercise 02_02
// Variables, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int a, b = 5; // single line comment

/* Multi
*  line
*  comment */

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "flag = " << my_flag << endl;
    my_flag = true;
    cout << "flag = " << my_flag << endl;
    cout << "a+b = " << a+b << endl;
    cout << "b-a = " << b-a << endl;
    unsigned int positive;
    positive = b - a;
    cout << "b-a (unsigned) = " << positive << endl;
    return (0);
}










