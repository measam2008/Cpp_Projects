#include<iostream>
using namespace std;
int main()
{
    int x,y,z,a,b,s;
    x=5;
    a=1;
    z=-2;
    do
    {
        y=1;
        do
        {
            cout<<" ";
            y++;
        } while (y<=x);
        
        x--;

        b=1;
        do
        {
            cout<<"*";
            b++;
        } while (b<=a);
        
        a++;


        s=-1;
        if (s<=z)
        {
           
            do
            {
            cout<<"*";
            s++;
            } while (s<=z); 
        }
        cout<<endl;
        z++;

        


    } while (x>=1 && a<=5 && z<=5);
    
    
    return 0;
}