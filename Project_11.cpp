#include <iostream> 
using namespace std;
int main() {
    int x,y,a;
    float b;
    x= -2;
    y= 10;
    a= 0;
    b= 4.5;
    a=++x + y--;
    b=x++ + --y;
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    
    return 0;
}
