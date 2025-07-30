#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter Your Number: ";
    cin>>x;
    y=0;
    
    
    do
    {
        y++;
        z=x*y;
        cout<<x<<"*"<<y<<"="<<z<<endl;
        
    } while (y<=9);
    

    return 0;
}