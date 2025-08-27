#include <iostream>
using namespace std;
int main ()
{
    int x,y,z;
    cout<<"Enter ending number of your series: ";
    cin>>y;
    z=0;
    for (x=1 ; x<=y ; x++ )
    {
        if (x % 2==0 && x<=(y-1))
        {
            cout<<x<<" + ";
        }else 
        {
            cout<<x;
            if (x<y)
            {
                cout<<" - ";
            }
            
        }

        if (x % 2==0 && x<=(y-1))
        {
            z-=x;
        }else 
        {
            z+=x;
        }
        
        
    }
    
    cout<<"= "<<z;
    
    return 0;
}