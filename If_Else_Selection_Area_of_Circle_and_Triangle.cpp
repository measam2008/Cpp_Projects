#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter your choice  \n C for Circle \n  T for Triangle"<<endl;
    cin>>ch;

    if(ch == 'C' || ch=='c'|| ch=='T'|| ch=='t')
    {
        if (ch=='C' || ch=='c')
        
        {
            float area, r;
            cout<<"Enter radius :"<<endl;
            cin>>r;
            area = 3.1416 * r * r; // Corrected formula for area of circle
            cout<<"Area of circle: "<<area<<endl;
        }
        else{
            float area,b,h;
        cout<<"Enter value of b :"<<endl;
        cin>>b;
        cout<<"Enter value of h :"<<endl;
        cin>>h;
        area=0.5*b*h;
        cout<<"Area: "<<area<<endl;
        }
        
    }
        
    else
    {
        cout<<"Invalid Input! Please enter 'C' for Circle or 'T' for Triangle."<<endl;
    }
    return 0;
}