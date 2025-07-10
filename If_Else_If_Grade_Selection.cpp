// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter your percentage: ";
    cin>>x;

    if(x >= 90 && x <= 100)
    {
        cout<<"Congrats! You Scored Fabulous A+";
    }
    else if(x >= 80 && x <= 89)
    {
        cout<<"Nice You Scored great!  A ";
    }
    else if(x >= 70 && x <= 79)
    {
        cout<<" You Scored B+  \n Keep It Up!";
    }
    else if(x >= 60 && x <= 69)
    {
        cout<<"You Scored B \n Not Satisfied ";
    }
    else if(x >= 50 && x <= 59)
    {
        cout<<"You Scored C \n Need Hardwork ";
    }
    else
    {
        cout<<"FAIL!";
    }
    
    return 0;
}