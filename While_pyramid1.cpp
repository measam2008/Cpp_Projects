#include<iostream>
using namespace std;
int main()
{

    int x,y,z,s,a,b;

    a=-2;
    x=5;
    s=1;

    while (x>=1 && s<=5 && a<=5)
    {
        z=1;
        while (z<=x)
        {
            cout<<" ";
            z++;
        }
        x--;
        
       
       
        y=1;
        while (y<=s)
        {
            cout<<"*";
            y++;
        }
        s++;

        b=-1;
        while (b<=a)
        {
            cout<<"*";
            b++;
        }
        cout<<endl;
        a++;
        

        
        
    }
    
    

    

    return 0;
}