#include <iostream>
using namespace std;
int main()
{
    int x,y;
    x=1;
    do
    {
      y=1;
      do
      {
        cout<<"*";
        y++;
      } while (y<=x);
      cout<<endl;
      x++;
    } while (x<=5);
    
    return 0;
}