#include<iostream>
using namespace std;
int main()
{

    int x,y,z,s;
    
    x=5;
    s=1;

    while (x>=1 && s<=5)
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
        cout<<endl;
        s++;
        
        
    }
    
    

    

    return 0;
}