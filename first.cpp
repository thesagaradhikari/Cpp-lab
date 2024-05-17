#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
float new_sal(float sal, float inc=0.12);
void main()
{
              float sal0=35000,sal1=25000,sal2=24000,sal3=18000;
              cout<<"Salary in the year 2013 per month:"<<endl
                 <<setw(24)<<"Chief executive officer:"<<sal0<<endl
                 <<setw(24)<<"Information officer:"<<sal1<<endl
                 <<setw(24)<<"System analyst:"<<sal2<<endl
                 <<setw(24)<<"Programmer:"<<sal3<<endl;

               sal0=new_sal(sal0, 0.09);
               sal1=new_sal(sal1, 0.10);
               sal2=new_sal(sal2);
               sal3=new_sal(sal3);
               cout<<endl<<"Salary in the year 2014 per month:"<<endl
                   <<setw(24)<<"Chief executive officer:"<<sal0<<endl
                   <<setw(24)<<"Information officer:"<<sal1<<endl
                   <<setw(24)<<"System analyst:"<<sal2<<endl
                   <<setw(24)<<"Programmer:"<<sal3<<endl;
               getch();
}

float new_sal(float sal, float inc)
{
               return(sal+(sal*inc));
}