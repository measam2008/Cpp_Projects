#include<iostream>
using namespace std;
int main() 
{

    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    if (x>y && x>z)
    {
        cout<<"Max= "<<x<<endl;

        if (y>z)
        {
            cout<<"Min= "<<z<<endl;
        }else
        {
            cout<<"Min= "<<y<<endl;
        }

    }else if (y>x && y>z)
    {

        if (x>z)
                {
                    cout<<"Min= "<<z<<endl;

                }
                else{
                    cout<<"Min= "<<x<<endl;
                }
                cout<<"Max= "<<y<<endl;
    }

    return 0;

}
    