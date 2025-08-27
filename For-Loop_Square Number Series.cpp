#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter The Ending Term: ";
    cin>>y;
    x=1;
    for (x=1 ; x<=y ; x++)
    {
        z=x*x;
        cout<<z;
        if (x<=(y-1))
        {
            cout<<" , ";
        }
        
        
    }
    

    return 0;
}