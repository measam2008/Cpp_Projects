#include <iostream>
using namespace std;
int main() 
{
   char weekday, exam, sick;
   cout<<"Type 'Y' for 'Yes' and 'N' for 'No'! "<<endl;
   
   cout<<"Is it a weekday?(y/n) ";
   cin>>weekday;
   cout<<"Do you have exam tomorrow?(y/n) ";
   cin>>exam;
   cout<<"Are you feeling sick?(y/n) ";
   cin>>sick;
   
   if(weekday=='Y' || weekday=='y' || exam=='Y' ||  exam=='y' || sick=='N' || sick=='n')
   {
       cout<<"Set alarm for 6 AM.";
   }
   else
   {
       cout<<"No need to set alarm.";
   }
    
    return 0;
}