#include <iostream>
using namespace std;
int main ()
{
    double y,b,x,a,s;
    cout<<"Enter the ending number of series: ";
    cin>>a;
    y=0;
    for ( b=1 ; b<=a ; b++)
    {
        s=b;
        cout<<" 1/"<<s;
        if (b<=(a-1))
        {
            cout<<" +";
        }
        y+=(1/b);
    }
    cout<<endl;
    cout<<"Hence \nThe sum of Harmonic series from 1 to 1/"<<a<<": "<<y<<endl;
    
    return 0;
}