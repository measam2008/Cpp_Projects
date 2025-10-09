#include <iostream>
using namespace std;
int temp_r(float x)
{
    float celsius;
    celsius = (x  / 1.8)- 32;
    cout<<"Temperature in Celsius: "<<celsius;
    

    return 0;

}
int temp_re(float x)
{
    float celsius_2;
    celsius_2 = (x  / 1.8)- 32;
    

    return celsius_2;

}
int main()
{
    float n,sell;
    cout<<"enter temp in fahrenheit: ";
    cin>>n;
    cout<<"Choose \n1.with return 0\n2.without return 0"<<endl;
    cin>>sell;

    if(sell==1)
    {
        temp_r(n);
    }
    else if(sell==2)
    {

        cout<<temp_re(n);

    }


 return 0;    
}
