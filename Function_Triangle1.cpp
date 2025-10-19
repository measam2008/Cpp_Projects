#include <iostream>
using namespace std;
int rows(int);
int sqr(int,int);

int main()
{
    int x,y;
    x=1;
    y=0;
    sqr(x,y);


    return 0;
}

int sqr(int n , int rn)
{
    if (n==6)
    {
        return 0;
    }
    else
    {
        if(rn==n)
        {
            cout<<endl;
            return sqr(n+1,0);
        }
        else
        {
            cout<<"*";
            return sqr(n,rn+1);
        }
        
    }
}