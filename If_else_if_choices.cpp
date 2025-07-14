#include<iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter any number from 1 to 4: "<<endl;
    cin>>x;
    if(x==1||x==2||x==3||x==4)
    {
        if(x==1)
        {
             float area, r;
            cout<<"Enter radius of Circle: ";
            cin>>r;
            area = 3.1416 * r * r; 
            cout<<"Area of Circle: "<<area<<endl;

        }
        else if(x==2)
        {
            float area,b,h;
        cout<<"Enter value of base of triangle: ";
        cin>>b;
        cout<<"Enter value of height of triangle: ";
        cin>>h;
        area=0.5*b*h;
        cout<<"Area of Triangle: "<<area<<endl;


        }
        else if (x==3)
        {
            float b,h,area;
            cout<<"Enter value of base of Parallelogram: ";
            cin>>b;
            cout<<"Enter value of height of Parallelogram: ";
            cin>>h;
            area=b*h;
            cout<<"Area of Parallelogram: "<<area<<endl;
        }
        else 
        {
            float area,a,b,h;
            cout<<"Enter value of b: ";
            cin>>b;
            cout<<"Enter value of a: ";
            cin>>a;
            cout<<"Enter value of h: ";
            cin>>h;
            area=h*a*0.5+h*b*0.5;
            cout<<"Area of trapezoid: "<<area<<endl;
        }

    }
    else
    {
        cout<<"Invalid Input"<<endl;

    }

    return 0;


}