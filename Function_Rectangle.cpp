#include <iostream>
using namespace std;

int sqr(int,int);

int main()
{
    int x;
    x=5;
    sqr(x,x);


    return 0;
}

int sqr(int n,int rn)
{
   
    if (n==0)
    {
        return 0;
    }
    else
    {
        


        if (rn==0)
        {
            cout<<endl;
             rn = 5;
            return sqr(n-1,rn);
        }
        else
        {
            cout<<"*";
            return sqr(n,rn-1);
        }
    
        
    }
}
