#include <iostream>
using namespace std;
int odd_sum(int , int);
int main()
{
    int fn,ln;
    cout<<"Enter the starting of number: ";
    cin>>fn;
    cout<<"Enter the ending of number: ";
    cin>>ln;
    cout<< odd_sum(fn,ln);


    return 0;
}
int odd_sum(int x, int y)
{
    if (x==y)
    {
        return 0;
    }
    
    
    if (y%2 == 0)
    {
        return y + odd_sum(x,y-1);
    }
    else
        return odd_sum(x,y-1);
       

}