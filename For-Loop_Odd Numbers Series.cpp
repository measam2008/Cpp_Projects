#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter ending even number: ";
    cin>>y;
    z=0;
    for (x=1 ; x<=y ; x++)
    {
        if (x%2!=0)
        {
            cout<<x;
            if (x<=(y-2))
            {
                cout<<" + ";
            }
            
            z+=x;
            
        }
    }
    
    cout<<" = "<<z;
    
    return 0;
}