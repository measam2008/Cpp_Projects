#include <iostream>
using namespace std;
int Alarm(int);
int main()
{
    int x;
    cout<<"Enter Number of Seconds for Alarm: ";
    cin>>x;
    Alarm(x);

    return 0;
}
int Alarm (int n)
{
    if (n==0)
    {
        cout<<"BEEP..!\nBEEP..!\nBEEP..!\nBEEP..!";
        return 0;
    }
    else
    {
        cout<<n<<endl;
        return Alarm(n-1);
    }
    


}