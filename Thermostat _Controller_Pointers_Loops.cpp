#include<iostream>
using namespace std;

int therm(int*, int*);

int main()
{
    int c_Temp;
    int t_Temp;

    cout << "Enter Current Temperature: ";
    cin >> c_Temp;

    cout << "Enter Target Temperature: ";
    cin >> t_Temp;

    therm(&c_Temp, &t_Temp);

    return 0;
}

int therm(int* xptr, int* yptr)
{
    int x = *xptr;
    int y = *yptr;

    

    if (x == y)
    {
        cout << "Current Temperature: " << x << endl;
        cout<< "  Target Reached ";
        return 0;
    }
    else if (x > y)
    {
        cout << "Current Temperature: " << x << endl;
        int newX = x - 1;
        return therm(&newX, yptr);
    }
    else // x < y
    {
        cout << "Current Temperature: " << x << endl;
        int newX = x + 1;
        return therm(&newX, yptr);
    }
}
