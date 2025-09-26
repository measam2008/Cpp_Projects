#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    for(x=1 ; x<=5 ; x++)
    {           
        for(y=1 ; y<=5 ; y++)
        {
            if ((x==1 && (y==1 || y==2 || y==3 || y==4 || y==5)) || (x==2 && (y==1 || y==5)) || (x==3 && (y==1 || y==5)) || (x==4 && (y==1 || y==5)) || (x==5 && (y==1 || y==2 || y==3 || y==4 || y==5)))
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
            
            
        }
        
        cout<<endl;
        
    }
    

    return 0;
}