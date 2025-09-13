#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    x = 1;
    while(x<=5)
    {
        y = 1;
        while(y<=5)
        {
            if ((x==1 && (y==1 || y==2 || y==3 || y==4 || y==5)) || (x==2 && (y==1 || y==5)) || (x==3 && (y==1 || y==5)) || (x==4 && (y==1 || y==5)) || (x==5 && (y==1 || y==2 || y==3 || y==4 || y==5)))
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
            
            y++;
        }
        
        cout<<endl;
        x++;
    }
    

    return 0;
}