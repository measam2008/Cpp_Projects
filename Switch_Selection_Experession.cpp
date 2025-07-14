#include<iostream>
using namespace std;
int main()
{

    int num1,num2;
    char x;
    cout<<"Enter any Number of your choice: ";
    cin>>num1;
    cout<<"Enter any Number of your choice: ";
    cin>>num2;
    cout<<"Enter any Operator of your choice: ";
    cin>>x;
    switch (x)
    {
    case '+':

        cout<<"Addition of Numbers: "<<num1+num2;
        break;
    case '-':
        cout<<"Substraction of Numbers: "<<num1-num2;
        break;  
    case '*':
        cout<<"Multiplication of Numbers: "<<num1*num2;
        break; 
    case '/': 
        cout<<"Division of Numbers: "<<num1/num2;
        break; 
    case '%':
        cout<<"Remainder of Numbers: "<<num1%num2;
        break;           
    
    default:
        cout<<"Invalid Operator";
        break;
    }
    return 0;
}