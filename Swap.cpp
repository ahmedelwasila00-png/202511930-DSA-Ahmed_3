#include <iostream>
using namespace std;

// function to swap two numbers using pointers
void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;  // store value of first pointer
    *ptr1 = *ptr2;     // assign value of second pointer to first
    *ptr2 = temp;      // assign stored value to second pointer
}

int main() {
    int a = 5, b = 10;
    
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    // call function with addresses of a and b
    swapNumbers(&a, &b);
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}