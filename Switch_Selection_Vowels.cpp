#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Your Character: ";
    cin>>ch;
    switch (ch)
    {
    case 'A':
    case 'a':

        cout<<"You entered a Vowel";
        break;
    case 'E':
    case 'e':
        cout<<"You entered a Vowel";
        break;
    case 'I':
    case 'i':
        cout<<"You entered a Vowel";
        break;
    case 'O':
    case 'o':
        cout<<"You entered a Vowel";
        break;
    case 'U':
    case 'u':
        cout<<"You entered a Vowel";
        break;        
        default:
        cout<<"You entered a Consonent";

        break;
    }
    return 0;
}