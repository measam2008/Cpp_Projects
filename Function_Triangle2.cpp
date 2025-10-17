#include <iostream>
using namespace std;
int rows(int);
int sqr(int);

int main()
{
    int x;
    x=0;
    sqr(x);


    return 0;
}

int sqr(int n)
{
    if (n==5)
    {
        return 0;
    }
    else{
    rows(n);
    cout<<endl;
    return sqr(n+1);
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