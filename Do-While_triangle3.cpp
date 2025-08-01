#include <iostream>
using namespace std;
int main()
{
    int x,y,a,b;
    x=5;
    a=1;
    do
    {
      y=1;
      do
      {
        cout<<" ";
        y++;
      } while (y<=x);
      x--;


      b=1;
      do
      {
        cout<<"*";
        b++;
      } while (b<=a);
      cout<<endl;
      a++;


    } while (x>=1 && a<=5);
    
    return 0;
}