#include<iostream>
using namespace std;
int main()
{

    int x,y,z,s;
    
    x=1;
    s=5;

    while (x<=5 && s>=1)
    {
        z=1;
        while (z<=x)
        {
            cout<<" ";
            z++;
            
        }
        x++;
        
       
       
        y=1;
        while (y<=s)
        {
            cout<<"*";
            y++;
        }
        cout<<endl;
        s--;
        
        
    }
    
    

    

    return 0;
}