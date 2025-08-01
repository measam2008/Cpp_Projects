#include<iostream>
using namespace std;
int main()
{
    int x,y,a,b,c,d;
    x=1;
    a=5;
    c=5;
    do
    {
        y=1;
        do
        {
            cout<<" ";
            y++;

        } while (y<=x);
        
        x++;


        b=1;
        do
        {
            cout<<"*";
            b++;
        } while (b<=a);
        
        a--;


        d=2;
        if (d<=c)
        {
            do
            {
            cout<<"*";
            d++;
            } 
            while (d<=c);
        }
        
        
        cout<<endl;
        c--;


    } while (x<=5 && a>=1 && c>=1);
    
    return 0;
}