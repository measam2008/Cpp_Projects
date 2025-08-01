#include<iostream>
using namespace std;
int main()
{
    int i, j;
    i = 1;
    do{
        j = 1;
        do{
            cout<<" * ";
            j++;
        }
        while(j<=5);
        cout<<endl;
        i++;
    }
    while(i<=5);

    return 0;
}