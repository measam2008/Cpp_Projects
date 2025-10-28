#include <iostream>
using namespace std;
int Binary(int* );
int main()
{
    int x;
    
    cout<<"Enter Any Number To Convert in Binary: ";
    cin >> x;
    
    Binary(&x);

    return 0;
}
int Binary(int* xptr)
{
    if (*xptr == 0)
    {
        return 0;
    }else
    {
        if(*xptr % 2==0)
        {
            cout<<"0";
            *xptr /=2;
            return Binary(xptr);

        }else
        {
            cout<<"1";
            *xptr /=2;
            return Binary(xptr);

        }
        
    }
    
     

    
    
}