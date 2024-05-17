#include<iostream>
#include<conio.h>
using namespace std;
typedef struct 
{
    int day, month, year;
}date;
void dateformat (date);
int main()
{
    int a,b,c;
    cout<<"Enter Day = ";
    
    cin>>a;
    cout << "Enter month = ";
    cin>>b;
    cout<<"Enter Year = ";
    cin>>c;
    date d={a,b,c};
    dateformat(d);
    getch();
}
void dateformat(date d)
{
    cout <<"The compiled date is "<<d.day<<"/"<<d.month<<"/"<<d.year;
}

