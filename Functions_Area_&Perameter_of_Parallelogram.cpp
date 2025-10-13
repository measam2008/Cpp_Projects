#include<iostream>
using namespace std;
float par( float , float );
float par_rt(float, float);
float ar_rt(float, float);
float area(float,float);
int main()
{ 
    float a,b,h ,sel,sel_ap;

    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Enter value of h"<<endl;
    cin>>h;
    cout<<"Choose \n1.With return 0\n2. Without return 0\n";
    cin>>sel;
    cout<<"Choose  \n1.Parameter\n2. Area\n";
    cin>>sel_ap;
    if (sel==1 && sel_ap==1)
    {
        par_rt(a,b);
    }else if(sel==1 && sel_ap==2){

        ar_rt(b,h);

    }else if (sel==2 && sel_ap==1)
    {
        cout<<par( a,b );
    }else if (sel==2 && sel_ap==2)
    {
        cout<< area(b,h);
    }else if(sel==1  sel_ap==1)
    {
        cout<<"invalid input";
    }
    
    
    return 0;
}


float par_rt( float x , float y )
{
    float parameter;

    parameter=2*x+2*y;
    cout<<"Parameter of Parallelogram:"<<parameter<<endl;
    return 0.0;
}
float ar_rt(float u ,float v)
{
    float area;
    area=u*v;
    cout<<"Area of Parallelogram: "<<area;
    return 0.0;
}
float par( float xr , float yr )
{
    float parameter;

    parameter=2*xr+2*yr;
    
    return parameter;
}
float area(float ur ,float vr)
{
    float area;
    area=ur*vr;
    return area;
}
