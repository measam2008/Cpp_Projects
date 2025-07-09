#include <iostream> 
using namespace std;
int main() {
    float celsius,fahrenheit;
    cout<<"Enter temperature in Celsius"<<endl;
    cin>>celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout<<"Fahrenheit: "<<fahrenheit;
    
    return 0;
}