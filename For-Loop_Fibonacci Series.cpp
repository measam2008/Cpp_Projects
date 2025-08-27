#include <iostream>
using namespace std;
int main ()
{
    int x,y,z,a,b,s;
    cout<<"Enter the ending term of series: ";
    cin>>y; 
    z=0;
    a=0;
    b=1;
    cout<<a<<" , "<<b<<" , ";
    for (x=0 ; x<=y ; x++)
    {
        s=a+b;
        cout<<s;
        if (x<=(y-1))
        {
            cout<<" , ";
        }
        
        a=b;
        b=s;
    }
    
    return 0;
}