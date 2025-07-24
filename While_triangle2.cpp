#include<iostream>
using namespace std;
int main()
{
    int x,y;
    x=5;
    while (x>=1)
    {
        y=1;
        while (y<=x)
        {
            cout<<"*";
            y++;
        }
        cout<<endl;
        x--;
    }
     
    return 0;
}