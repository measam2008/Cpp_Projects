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
        if (d<=c)
        {
            do
            {
                cout<<" ";
                d++;
            }while(d<=c); 
        }
        
        
        c--;
        
        
        f=1;
        do
        {
            cout<<"*";
            f++;
        }while(f<=e);
        e++;
        
        
        h=-1;
        if (h<=g)
        {
            do
            {
            cout<<"*";
            h++;
            }while(h<=g);
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
        do
        {
            cout<<" ";
            b++;
        }while (b<=a);
        a++;


        z=1;
        do
        {
            cout<<"*";
            z++;
        }while (z<=x);
        x--;

        y=2;
        if (y<=s)
        {
            do
            {
            cout<<"*";
            y++;
            }while (y<=s);
        }
        
        
        s--;
        

        cout<<endl;
        
       
        
        

        
        
    }
    
    

    

    return 0;
}