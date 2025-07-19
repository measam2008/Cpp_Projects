#include<iostream>
using namespace std;
int main()
{
    int x,y,f;
    cout<<"Enter Any Number: ";
    cin>>y;
    x=f=1;
    while (x<=y)
    {
        f=f*x ;
        x++;
    }
    cout<<"Factorial: "<<f;
    

    return 0;
}