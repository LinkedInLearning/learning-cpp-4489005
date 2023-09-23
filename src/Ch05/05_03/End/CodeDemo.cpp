// Learning C++ 
// Exercise 05_03
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

using namespace std;

// Takes arguments by value
int square(int x){
    x = x * x;
    return x;
}

// Takes arguments by address
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Takes arguments by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return (0);
}
