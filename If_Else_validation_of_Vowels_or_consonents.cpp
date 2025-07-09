#include<iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter your character: \n(Only 1 Character at a time)" << endl;
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "You entered a Vowel" << endl;
    }
    else
    {
        cout << "You entered a Consonant" << endl;
    }

    return 0;
}