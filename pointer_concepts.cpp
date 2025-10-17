#include <iostream>
using namespace std;



double* dang(){
    double y = 12.14145;

    return &y;
}

int main() {
    int var = 10;

    // declare pointer and store address of x
    int* ptr = &var;

    // print value and address
    cout << "Value of x: " << var << endl;
    cout << "Address of x: " << &var << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;


    int var2 = 20;
    
    // Store the address of 
    // var variable
    int* ptr2 = &var2;
    
    // Access value using (*)
    // operator
    cout << *ptr2<<endl;
    cout << &ptr2<<endl;

    int  x1 = 3;
    ptr2 = &x1;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;

    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr2)<<endl;

    //wild pointer
    float* ptr3;
    cout<<ptr3<<endl;

    //NULL pointer
    ptr3 = NULL;
    cout<<ptr3<<endl;


    float x2 = 72.14;
    
    // void pointer holding address of an int
    void* ptr4 = &x2; 

    // Error: cannot dereference void pointer
    // cout << *ptr4; 
        cout<<ptr4<<endl;
    // Typecast before dereferencing
    cout << "Value pointed by void pointer: " << *(static_cast<float*>(ptr4)) << endl;

    double* ptr5 = dang();
    //cout<<ptr5<<endl;
    //cout<<*ptr5<<endl;


    return 0;
}