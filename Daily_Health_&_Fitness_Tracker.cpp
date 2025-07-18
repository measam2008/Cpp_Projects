#include<iostream>
using namespace std;
int main ()
{
    string Fname, Lname;
    int sw;
    double age,weight,height,bf,lh,dn,cd,st,yg,calories,x,y,c,s,g,z,ncal,gcal,mcal,lcal,wg,wgn,hinm,BMI,sleeph,stress;
    cout<<"Enter Your First Name Only: ";
    cin>>Fname;
    cout<<"Enter Your Last Name Only: ";
    cin>>Lname;
    cout<<"Welcome Mr/Ms. "<<Fname<<" "<<Lname<<" to Daily Health & Fitness Tracker."<<endl;
    cout<<"Enter Your Age(years): ";
    cin>>age;
    cout<<"Enter Your Weight(Kg): ";
    cin>>weight;
    cout<<"Enter Your Height(cm): ";
    cin>>height;
    
    
    
    
    
    
    hinm=height/100;
    BMI=weight/(hinm*hinm);
    cout<<"BMI: "<<BMI<<endl;
    if (BMI<18.5)
    {
        cout<<"You are Underweight."<<endl;
    }
    else if (BMI>=18.5 && BMI<25)
    {
        cout<<"You are Healthy."<<endl;
    }
    else if (BMI>25 && BMI<30)
    {
        cout<<"You are Overweight."<<endl;
    }
    else
    {
        cout<<"You are Obese."<<endl;
    }
    
    
    

    
    
    
    cout<<"Please enter further details"<<endl;
    cout<<"Minutes For Cardio: ";
    cin>>cd;
    cout<<"Minutes For Strength training: ";
    cin>>st;
    cout<<"Minutes For Yoga: ";
    cin>>yg;
    x=cd+st+yg;
    cout<<"Total Time For Workout: "<<x<<"  (min)"<<endl;
    
    
    
    
    
    sw=x/30;
    if (sw>0&&sw<1)
    {
        sw==0;
    }
    else if (sw>1&&sw<2)
    {
        sw==1;
    }
    else
    {
        sw==2;
    }
    
    
    
    switch (sw)
    {
    case 0:
        cout<<"Low activity. Aim for 30+ mins!"<<endl;
        break;
    case 1:
        cout<<"Moderate activity. Well done!"<<endl;
        break;
    default:
        cout<<"High activity! Excellent!"<<endl;
        break;
    }
    
    
    cout<<"Calories Consuption(per-day): "<<endl;
    cout<<"Breakfast: ";
    cin>>bf;
    cout<<"Lunch: ";
    cin>>lh;
    cout<<"Dinner: ";
    cin>>dn;
    y=bf+lh+dn;
    cout<<"Hence \nTotal Calories Intake Per day: "<<y<<endl;
    
    
    
    cout<<"Water Consuption\n Glass (per-day): ";
    cin>>wg;
    
    
    
     if (wg>=8)
    {
        cout<<"Great! you are well hydrated."<<endl;
    }
    else
    {
        wgn=8-wg;
        cout<<"Need to Drink "<<wgn<<" glass of water."<<endl;
    }
    
    

    
    cout<<"Calories Burned(per-day): "<<endl;
    c=cd*8;
    cout<<"During Cardio: "<<c<<endl;
    s=st*5;
    cout<<"During Strength Training: "<<s<<endl;
    g=yg*3;
    cout<<"During Yoga: "<<g<<endl;
    z=c+s+g;
    cout<<"Total Calories Burned: "<<z<<endl;
    
    
    cout<<"Daily Calories Intake Goal: ";
    cin>>gcal;
    
    ncal=y-z;
    cout<<"Net Calories: "<<ncal<<endl;
    
    
    
    lcal=ncal-gcal;
    if (ncal==gcal)
    {
        cout<<"You are doing great."<<endl;
    }
    else if (ncal<gcal)
    {
        lcal=-lcal;
        cout<<"You deficit "<<lcal<<" calories."<<endl;
    }
    
    
    else
    {
        
        mcal=(lcal/8);
        cout<<"You need to do cardio for another "<<mcal<<" minuites."<<endl;
    }
    
    
    
    if (wg>=8)
    {
        cout<<"Great! you are well hydrated."<<endl;
    }
    else
    {
        wgn=8-wg;
        cout<<"Need to Drink "<<wgn<<" glass of water."<<endl;
    }

    
    
    
    cout<<"Enter Your Sleeping Hours: ";
    cin>>sleeph;
    
    
    
    if (sleeph>=1 && sleeph<=3)
    {
        cout<<"your sleep quality is Poor!"<<endl; 
    }
    else if (sleeph>=4 && sleeph<=6)
    {
        cout<<"your sleep quality is Fair!"<<endl;
    }
    else if (sleeph>=7 && sleeph<=9)
    {
        cout<<"your sleep quality is Good!"<<endl;
    }
    else
    {
        cout<<"Hypersomnia!"<<endl;
    }
    
    


    cout<<"Rate Your Stress Level Out of 10: ";
    cin>>stress;
    if (stress>=1 && stress<=3)
    {
        cout<<"Optimal stress. No need to worry."<<endl;
    }
    else if (stress>=4 && stress<=6)
    {
        cout<<"Manage stress. You should seek your threpist."<<endl;
    }
    else if (stress>=7 && stress<=10)
    {
        cout<<"Warning!. You Really Needed Some Rest and Thrapy! "<<endl;
    }
    else
    {
        cout<<"Invalid input\n Please enter numbers from 1 to 10."<<endl;
    }




    cout<<"Sumarry: "<<endl;
    cout<<"Enter Your Age(years): "<<age<<endl;
    cout<<"Enter Your Weight(Kg): "<<weight<<endl;
    cout<<"Enter Your Height(cm): "<<height<<endl;
    cout<<"Exercise Time: "<<x<<endl;
    cout<<"Total Calories Intake Per day: "<<y<<endl;
    cout<<"Net Calories: "<<ncal<<endl;
    
    if (wg>=8)
    {
        cout<<"Great! you are well hydrated."<<endl;
    }
    else
    {
        wgn=8-wg;
        cout<<"Need to Drink "<<wgn<<" glass of water."<<endl;
    }



    hinm=height/100;
    BMI=weight/(hinm*hinm);
    cout<<"BMI: "<<BMI<<endl;
    if (BMI<18.5)
    {
        cout<<"You are Underweight."<<endl;
    }
    else if (BMI>=18.5 && BMI<25)
    {
        cout<<"You are Healthy."<<endl;
    }
    else if (BMI>25 && BMI<30)
    {
        cout<<"You are Overweight."<<endl;
    }
    else
    {
        cout<<"You are Obese."<<endl;
    }

    if (sleeph>=1 && sleeph<=3)
    {
        cout<<"your sleep quality is Poor!"<<endl; 
    }
    else if (sleeph>=4 && sleeph<=6)
    {
        cout<<"your sleep quality is Fair!"<<endl;
    }
    else if (sleeph>=7 && sleeph<=9)
    {
        cout<<"your sleep quality is Good!"<<endl;
    }
    else
    {
        cout<<"Hypersomnia!"<<endl;
    }



    if (stress>=1 && stress<=3)
    {
        cout<<"Optimal stress. No need to worry."<<endl;
    }
    else if (stress>=4 && stress<=6)
    {
        cout<<"Manage stress. You should seek your threpist."<<endl;
    }
    else if (stress>=7 && stress<=10)
    {
        cout<<"Warning!. You Really Needed Some Rest and Thrapy! "<<endl;
    }
    else
    {
        cout<<"Invalid input\n Please enter numbers from 1 to 10."<<endl;
    }












    return 0;
}

