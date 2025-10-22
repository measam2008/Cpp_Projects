#include <iostream>
using namespace std;
int tryPIN(string*,string*);
int main ()
{
    string username, storedPIN,EnteredPIN;
    cout<<"Enter Username: ";
    cin>>username;
    cout<<"Enter Set up Your Pin: ";
    cin>>storedPIN;
    cout<<"Pin Saved.\nLets Test it.\n ";
    
    for (int i = 0; i <= 3; i++)
    {   
        
        cout<<"Enter Your PIN: ";
        cin>>EnteredPIN;
        int result=tryPIN(&storedPIN,&EnteredPIN);

        switch (result)
        {
        case 0:
            cout<<"Acess Granted!"<<endl;
            return 0;
            break;
        case 1:
            cout<<"Acess Denied!"<<endl;
            cout<<"Try Again."<<endl;
            break;
        
        if (i==3)
        {
            cout<<"BLOCK OUT !"<<endl;
            return 0;
        }
        
        }
    }
    
}
int tryPIN(string *PINget,string *PINEntered)
{
    if (*PINget==*PINEntered)
    {
        return 0;
    }else
    {
        return 1;
    }
    
    



} 