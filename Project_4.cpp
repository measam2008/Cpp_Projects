#include <iostream>
using namespace std;
int main() 
{
   float parameter,area,a,b,c,d,h;
   cout<<"Enter value of a: "<<endl;
   cin>>a;
   cout<<"Enter value of b: "<<endl;
   cin>>b;
   cout<<"Enter value of c: "<<endl;
   cin>>c;
   cout<<"Enter value of d: "<<endl;
   cin>>d;
   cout<<"Enter value of h: "<<endl;
   cin>>h;
   parameter=a+b+c+d;
   cout<<"Parameter of trapezoid:"<<parameter<<endl;
   area=h*a*0.5+h*b*0.5;
   cout<<"Area of trapezoid: "<<area<<endl;
    return 0;
}