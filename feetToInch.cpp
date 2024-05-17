#include<iostream>
#include<conio.h>
using namespace std;
float x;
int main()
{
    float length();
    float length(float x);
    float length(float x, float y);
    cout<<"Enter the length in feet = ";
    cin>>x;
    cout<<"Without using argument = "<<length()<<endl;
    cout<<"With using one argument = "<<length(x)<<endl;
    cout<<"With using two argument = "<<length(x, 12);
    getch();
    return 0;
}
float length()
{
    return x*12;
}
float length(float a)
{
    return a*12;
}
float length(float a, float b)
{
    return a*b;
}