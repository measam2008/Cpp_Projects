#include <iostream> 
using namespace std;
int main() {
    float celsius,fahrenheit;
    cout<<"Enter temperature in Fahrenheit"<<endl;
    cin>>fahrenheit;
    celsius = (fahrenheit * 9 / 5) + 32;
    cout<<"Temperature in Celsius: "<<celsius;
    
    return 0;
}