#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter your choice not other than \n C for Circle \n and T for Triangle"<<endl;
    cin>>ch;

    if(ch == 'C' || ch=='c')
    {
        int area,r;
        cout<<"Enter radius :"<<endl;
        cin>>r;
        area= 2*3.1416*r;
        cout<<"Area of circle: "<<area<<endl;
    }
    else
    {
        float area,b,h;
        cout<<"Enter value of b :"<<endl;
        cin>>b;
        cout<<"Enter value of h :"<<endl;
        cin>>h;
        area=0.5*b*h;
        cout<<"Area: "<<area;
    }
    return 0;
}