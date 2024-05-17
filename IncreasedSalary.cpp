#include<iostream>
using namespace std;
class Salary
{
    float chief,infoOff,sysAny,programer;
    float Cinc,Iinc,Sinc,Pinc;
    public:
    float CalculateSalary(float x, float y)
    {
        return x+(y/100)*x;
    }
    void ShowSalary()
    {
        cout<<"The present salary in year 2010 of respective positions are as follows :"<<endl; 
        cout<<"Chief Executive Officer = Rs."<<CalculateSalary(chief=35000.0,Cinc=9.0)<<"/m"<<endl;
        cout<<"Information Officer = Rs."<<CalculateSalary(infoOff=25000.0,Iinc=10.0)<<"/m"<<endl;
        cout<<"System Analyst = Rs."<<CalculateSalary(sysAny=24000.0,Sinc=12.0)<<"/m"<<endl;
        cout<<"Programmer = Rs."<<CalculateSalary(programer=18000.0,Pinc=12.0)<<"/m"<<endl;
    }

};
int main()
{
    Salary S1;
    S1.ShowSalary();
    
    return 0;
}