#include <iostream>
using namespace std;
int rows(int);
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
    else{
    rows(rn);
    cout<<endl;
    return sqr(n-1,rn);
    }
}
int rows(int r)
{
    if (r==0)
    {
        return 0;
    }
    else{
    cout<<"*";
    return rows(r-1);
    }
}