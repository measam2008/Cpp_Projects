#include <iostream>
using namespace std;
int main()
{
    int x,y,a,b,c,d,e,f,g,h,i,j,k,l;
    x=1;
    a=5;
    c=5;
    e=5;
    g=1;
    i=1;
    k=1;

    while (x<=5 && c>=1 && e>=1 && g<=5)
    {
        y=2;
       while (y<=x)
       {
         cout<<"*";
         y++;
       }
       x++;

       d=1;
       while (d<=c)
       {
        cout<<" ";
        d++;
       }
       c--;

       f=1;
       while (f<=e)
       {
        cout<<" ";
        f++;
       }
       e--;

       h=2;
       while (h<=g)
       {
        cout<<"*";
        h++;
       }
       g++;
       
       cout<<endl;

       
    }
    int m,n;
    m=5;
    while (a>=1 && i<=5 && k<=5 && m>=1)
    {
        b=1;
       while (b<=a)
       {
         cout<<"*";
         b++;
       }
       a--;

       j=2;
       while (j<=i)
       {
        cout<<" ";
        j++;
       }
       i++;

       l=2;
       while (l<=k)
       {
        cout<<" ";
        l++;
       }
       k++;
       
       n=1;
       while (n<=m)
       {
        cout<<"*";
        n++;
       }
       m--;
       
       

       cout<<endl;
    
    }
    
    


    return 0;
}