#include<iostream>
using namespace std;
int main()
{
    string  Fname,Lname;
    double income,fd,tp,bl,ot,x,balance,goal,y,z;
    cout<<"Enter Your First Name Only: ";
    cin>>Fname;
    cout<<"Enter Your Last Name Only: ";
    cin>>Lname;
    cout<<"Welcome Mr."<<Fname<<" "<<Lname<<" to your Personal Finance Manager"<<endl;
    cout<<"Write Down Your Income: ";
    cin>>income;
    cout<<"Write Monthly Expenditure \n Food: ";
    cin>>fd;
    cout<<"Transport: ";
    cin>>tp;
    cout<<"Bills: ";
    cin>>bl;
    cout<<"Others: ";
    cin>>ot;
    x=fd+tp+bl+ot;
    cout<<"Total Expenditure: "<<x<<endl;




    if (income>x)
    {
        cout<<"Good, You are nicely managing your finance. "<<endl;
    }
    else
    {
        cout<<"Warning! Your Expenditures are Exceeding."<<endl;
    }
    


    balance= income - x;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Saving Goal: ";
    cin>>goal;



    if (balance >= goal)
    {
        cout<<"Great! You have achieved your goal"<<endl;
    }
    else
    {
        y=(balance/goal) * 100;
        cout << "You have saved " << y << " percent of your goal"<<endl;
    }



    if (balance>=20000)
    {
        z= +100;
        cout<<"Great! You Have Earned 100 points"<<endl;

    }
    else if(balance<20000 && balance>=10000)
    {
        z= +50;
        cout<<"Nice! You Have Earned 50 points"<<endl;

    }
    else if(balance<20000 && balance<10000 && balance>=5000)
    {
        z= +30;
        cout<<"Nice! You Have Earned 30 points"<<endl;

    }
    else
    {
        z= +10;
        cout<<"You Have Earned 10 points. \n Keep Saving!"<<endl;
    }
    


    int pp;
    cout<<"Select Your Most Prefered Payment Method \n 1.Cash \n 2.Credit \n 3.Easy Paisa \n 4.Jazz Cash \n 5.All"<<endl;
    cin>>pp;

    switch (pp)
    {
    case 1:

        cout<<"You Prefer Cash."<<endl;
        break;
    case 2:
        cout<<"You Prefer Credit."<<endl;
        break;
    case 3:
        cout<<"You Prefer Easy Paisa."<<endl;
        break;
    case 4:
        cout<<"You Prefer Jazz Cash."<<endl;
        break;
    case 5:
        cout<<"Great! You Prefer All."<<endl;
        break;        
    default:
        cout<<"Invalid Input."<<endl;
        break;
    }



    

    cout<<"Summary: "<<endl;
    cout<<"Your income: "<<income<<endl;
    cout<<"Total Expenses: "<<x<<endl;
    cout<<"Total Balance: "<<balance<<endl;
     if (balance >= goal)
    {
        cout<<"Hence Your Budget status is Great."<<endl;
    }
    else
    {
        y=(balance/goal) * 100;
        cout<<"Your Budget status is Bad."<<endl;
        cout << "You have saved " << y << " percent of your goal"<<endl;
        
    }

    y=(balance/goal) * 100;
    cout << "You have saved " << y << " percent of your goal"<<endl;

    cout<<"Reward Points: "<<z<<endl;




  return 0;
}