#include <iostream>
using namespace std;
int main()
{
    double x,y,a,r,b;
    cout<<"Write value of 'a': ";
    cin>>a;
    cout<<"Write value of 'r': ";
    cin>>r;
    cout<<"Write ending number of your series: ";
    cin>>y;
    cout<<a<<" , ";
    for (x=1 ; x<=y ; x++)
    {
        a=a*r;
        cout<<a;
        if (x<=(y-1))
        {
            cout<<" , ";
        }
        
    }
    
    return 0;
}