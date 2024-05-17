#include<iostream>
#include<conio.h>
using namespace std;
float t1,t2;
int main()
{
    float &temp(float &,float &);
    cout<<"Enter the first temperature = ";
    cin>>t1;
    cout<<"Enter the second temperature  = ";
    cin>>t2;
    if(t1==t2)
    cout<<"Both temperature are equal .";
    else
    {
        temp(t1,t2)=1;
        if(t1==1)
        cout<<"The first temperature is the largest one ";
        else
        cout<<"Temperature second is the largest one ";

    }
    return 0;
}
float &temp(float &a,float &b)
{
if(a>b)
return a;
else
return b;
}