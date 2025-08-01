#include <iostream>
using namespace std;
int main()
{
    int x,y;
    x=5;
    do
    {
      y=1;
      do
      {
        cout<<"*";
        y++;
      } while (y<=x);
      cout<<endl;
      x--;
    } while (x>=1);
    
    return 0;
}