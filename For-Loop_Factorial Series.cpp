#include<iostream>
using namespace std;
int main ()
{
    int x,y,z,f;
    cout<<"Enter ending term of series: ";
    cin>>y;
    z=0;
    for (f=1 ; f<=y ; f++)
    {
        for (x=1 ; x<=y ; x++)
        {
            f=f*x;
            cout<<f;
            if (x<=(y-1))
            {
                cout<<" + ";
            }
            z=z+f;
            
        }
        cout<<"= "<<z;
        
    }
    

    return 0;
}