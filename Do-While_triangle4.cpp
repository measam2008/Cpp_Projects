#include<iostream>
using namespace std;
int main()
{
 int x,y,a,b;
    x=5;
    a=1;
    do
    {
        b=1;
      do
      {
        cout<<" ";
        b++;
      } while (b<=a);
      
      a++;


      y=1;
      do
      {
        cout<<"*";
        y++;
      } while (y<=x);
      x--;

      cout<<endl;

    } while (x>=1 && a<=5);
    
    return 0;
}
