#include <iostream>
using namespace std;
int factorial(int );



int main() {
    int x;
    cout << "Enter Any number: ";
    cin >> x;

    cout << "Factorial of " << x << " is " << factorial(x) << endl;
    return 0;
}

int factorial(int y) 
{
    if (y <= 1)
        return 1;                  // base case: stop recursion
    else
        return y * factorial(y - 1);  // recursive step
}