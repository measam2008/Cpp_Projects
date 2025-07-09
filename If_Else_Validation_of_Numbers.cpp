#include <iostream>
using namespace std;
int main() 
{
    
    int x;
    cout<<"Enter any Number: "<<endl;
    cin>>x;
    if (10<x && x<100 && x%2==0)
    {
        cout<<"Valid Number"<<endl;
    }
    else{
        cout<<"Invalid Number"<<endl;
    }
    
    return 0;
}
// This code checks if a number is between 10 and 100 and is even.
// If both conditions are met,
 //it prints "Valid Number"; otherwise, it prints "Invalid Number".