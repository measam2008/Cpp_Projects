#include <iostream>
#include <conio.h>
using namespace std;
int r_value(int , int);
int r_pntr(int* , int*);
int main()
{
    int x;
    int y;
    
    char sel;
    cout<<"Enter Maximum Amount of Water in Jug(in milli-liter): ";
    cin>>x;
    cout<<"Enter Current Water level in Jug(in milli-liter): ";
    cin>>y;
    
    cout<<"Select\n1.By Value\n2.By Pointers"<<endl;
    sel = getche();
    if(sel=='1')
    {
        //by value
        r_value(x,y);
    }
    else if (sel=='2')
    {
        r_pntr(&x,&y);
    }
    

    
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    cout<<"Jug Refilled..!"<<endl;
    
    return 0;
}


int r_pntr(int* tp_wtr, int* cp_wtr)
{
    if (*tp_wtr == *cp_wtr)
    {
        return 0;
    }
    else if (*cp_wtr <= *tp_wtr)
    
        cout<<"Current Water Level: "<<*cp_wtr<<endl;
        (*cp_wtr)++;
        return r_pntr(tp_wtr , cp_wtr);

}



int r_value(int t_wtr,int c_wtr)
{
    if (t_wtr == c_wtr)
    {
        return 0;
    }
    else if (c_wtr <= t_wtr)
    
        cout<<"Current Water Level: "<<c_wtr<<endl;
        return r_value(t_wtr , c_wtr + 1);
    
    
}
