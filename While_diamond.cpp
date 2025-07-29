#include<iostream>
using namespace std;
int main()
{   
    
    int c,d,e,f,g,h;
    c=5;
    e=1;
    g=-2;
    while(c>=1 && e<=5 && g<=5)
    {
        d=2;
        while(d<=c)
        {
            cout<<" ";
            d++;
        }
        c--;
        
        
        f=1;
        while(f<=e)
        {
            cout<<"*";
            f++;
        }
        e++;
        
        
        h=-1;
        while(h<=g)
        {
            cout<<"*";
            h++;
        }
        g++;
        cout<<endl;
        
    }

    int x,y,z,s,a,b;

    a=1;
    x=4;
    s=4;

    while (x>=1 && s>=1 && a<=4)
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