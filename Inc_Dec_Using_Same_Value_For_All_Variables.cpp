#include <iostream>
using namespace std;
int main() {
    int x , y, a, b;
    x = y = a = b = 7;
    a=++x + y--;
    b=x++ + --y;
    cout<<++x<<endl;
    cout<<--y<<endl;
    cout<<a++<<endl;
    cout<<b--<<endl;
  

    return 0;
}