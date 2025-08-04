#include <iostream>
using namespace std;
int main()
{
    int x,y,a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    x=1;
    a=5;
    c=5;
    e=5;
    g=1;
    i=1;
    k=1;
    m=5;

    do
    {
        y=2;
        if(y<=x)
        {
          do
         {
          cout<<"*";
          y++;
         } while (y<=x);
       }
       x++;

       d=1;
       do
       {
        cout<<" ";
        d++;
       }       while (d<=c);

       c--;

       f=1;
       do
       {
        cout<<" ";
        f++;
       }while (f<=e);
       e--;

       h=2;
       if(h<=g)
       {
       do
       {
        cout<<"*";
        h++;
       }while (h<=g);
       }
       g++;
       
       cout<<endl;

       
    }while (x<=5 && c>=1 && e>=1 && g<=5);
    
    
    
    
    
    do
    {
        b=1;
       do
       {
         cout<<"*";
         b++;
       }while (b<=a);
       
       a--;

       j=2;
       
       if(j<=i)
       {
       do
       {
        cout<<" ";
        j++;
       }while (j<=i);
       }
       i++;

       l=2;
       
       if(l<=k)
       {
         do
         {
           cout<<" ";
           l++;
         }while (l<=k);
       }
       k++;
       
       n=1;
       do
       {
        cout<<"*";
        n++;
       }while (n<=m);
       m--;
       
       

       cout<<endl;
    
    }while (a>=1 && i<=5 && k<=5 && m>=1);
    
    


    return 0;
}