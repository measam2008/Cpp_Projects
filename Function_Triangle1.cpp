#include <iostream>
using namespace std;
int rows(int);
int sqr(int,int);

int main()
{
    int x,y;
    x=0;
    y=4;
    sqr(x,y);


    return 0;
}

int sqr(int n , int rn)
{
    if (n==5)
    {
        return 0;
    }
    else{
    rows(rn);
    cout<<endl;
    return sqr(n+1,rn-1);
    }
}
int rows(int r)
{
    if (r==5)
    {
        return 0;
    }
    else{
    cout<<"*";
    return rows(r+1);
    }
}