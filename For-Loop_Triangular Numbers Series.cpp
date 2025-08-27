#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the ending term of Series: ";
    cin>>z;
    x=1;
    cout<<x<<" , ";
    for (y=2 ; y<=z ; y++)
    {
        x+=y;
        cout<<x;
        if (y<=(z-1))
        {
            cout<<" , ";
        }
        
    }
    

    return 0;
}