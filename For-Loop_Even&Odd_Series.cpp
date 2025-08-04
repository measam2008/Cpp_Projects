#include <iostream>
using namespace std;
int main()
{
    int x,y,z,a;
    cout<<"Enter Start of Range: ";
    cin>>a;
    cout<<"Enter End of Range: ";
    cin>>y;
    for (x=a ; x<=y ; x++)
    {
        if (x%2==0)
        {
            z=x*x;
            cout<<"Square of "<<x<<" Number: "<<z<<"\n"<<endl;

        }
        else
        {
            z=x*x*x;
            cout<<"Cube of "<<x<<" Number: "<<z<<"\n"<<endl;
        }
        
        
    }
    
    return 0;
}