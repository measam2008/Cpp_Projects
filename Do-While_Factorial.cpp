#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter Your Number: ";
    cin>>x;
    y=z=1;
    do
    {
        z=z*y;
        y++;
        
    } while (y<=x);
    cout<<"Factorial of "<<x<<": "<<z<<endl;
    return 0;
}