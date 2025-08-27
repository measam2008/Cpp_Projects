#include <iostream>
using namespace std;
int main()
{
    int x,y,z,a,d;
    cout<<"Write value of 'a': ";
    cin>>a;
    cout<<"Write value of 'd': ";
    cin>>d;
    cout<<"Write ending number of your series: ";
    cin>>y;
    
    for (x=0 ; x<=y ; x++)
    {
        z=a+x*d;
        cout<<z<<" , ";
    }
    
    return 0;
}