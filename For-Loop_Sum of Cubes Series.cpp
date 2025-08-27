#include <iostream>
using namespace std;
int main ()
{
    int x,y,a,b,s;
    cout<<"Enter the ending number for series: ";
    cin>>a;
    y=0;
    
    for ( b=1 ; b<=a ; b++)
    {
        s=b*b;
        cout<<s;
        if (b<= (a-1))
        {
            cout<<"+";
        }
        y+=b*b*b;
        
        
    }
    cout<<endl;
    cout<<"Hence \nThe sum of cube of 1 to "<<a<<" numbers:  "<<y<<endl;
    
    return 0;
}