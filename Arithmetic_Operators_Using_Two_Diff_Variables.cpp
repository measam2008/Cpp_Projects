#include <iostream>
using namespace std;

int main() {
    int x =2 ;
    int y =4;
 
    cout<<"Enter you values:  \n";
    cout<<"enter x: "<<endl;
    cin>>x;
    x=x+y;
    cout<<"Result : "<<x<<endl;
    x = x-y;
    cout<<"Result : "<<x<<endl;
    x = x*y;
    cout<<"Result : "<<x<<endl;
    x = x/y;
    cout<<"Result : "<<x<<endl;
    x = x%y;
    cout<<"Result : "<<x<<endl;
    

    return 0;
}