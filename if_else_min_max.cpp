#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter your numbers: "<<endl;
    cin>>num1>>num2;

    if(num1 > num2)
    {
        cout<<"Max = "<<num1<<endl;
        cout<<"Min = "<<num2<<endl;

    }
    else{
        cout<<"Max = "<<num2<<endl;
        cout<<"Min = "<<num1<<endl;
    }
return 0;

}