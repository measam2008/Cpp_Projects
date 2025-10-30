#include <iostream>
using namespace std;
void Binary(int* );
int main()
{
    int x;
    
    cout<<"Enter Any Number To Convert in Binary: ";
    cin >> x;
    
    Binary(&x);

    return 0;
}
void Binary(int* xptr)
{
    if (*xptr == 0)
    {
        return;
    }else
    {
        if(*xptr % 2==0)
        {
            
            *xptr /=2;
             Binary(xptr);
            cout<<"0";
        }else
        {
            
            *xptr /=2;
            Binary(xptr);
            cout<<"1";
        }
        
    }
    
     

    
    
}