#include<iostream>
using namespace std;
int main()
{

    int x,y,z,s,a,b;

    a=1;
    x=5;
    s=5;

    while (x>=1 && s>=1 && a<=5)
    {
        
        
        b=1;
        while (b<=a)
        {
            cout<<" ";
            b++;
        }
        a++;


        z=1;
        while (z<=x)
        {
            cout<<"*";
            z++;
        }
        x--;

        y=2;
        while (y<=s)
        {
            cout<<"*";
            y++;
        }
        s--;
        

        cout<<endl;
        
       
        
        

        
        
    }
    
    

    

    return 0;
}