#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    float r;
    cout<<"Enter your values :  \n";
    cout<<"Enter x :"<<endl;
    cin>>x;
    cout<<"Enter y:"<<endl;
    cin>>y;
    x+=y;
    cout<<"Result :"<<x<<endl;
    x-=y;
    cout<<"Result :"<<x<<endl;
    x*=y;
    cout<<"Result :"<<x<<endl;
    x/=y;
    cout<<"Result :"<<x<<endl;
    x%=y;
    cout<<"Result :"<<x<<endl;
    
    return 0;
}