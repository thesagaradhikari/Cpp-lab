#include<iostream>
using namespace std;
class date
{
    int hr,meen,sec;
public:
    date()
    {
        hr=0;
        meen=0;
        sec=0;
    }
    date(int a, int b, int c)
    {
        hr=a;meen=b; sec=c;
    }
    date adddate(date d1,date d2)
    {
        date d3;
        d3.sec=d1.sec+d2.sec;
        d3.meen=d1.meen+d2.meen+d3.sec/60;
        d3.sec=d3.sec%60;
        d3.hr=d1.hr+d2.hr+d3.meen/60;
        d3.meen=d3.meen%60;

       return d3;

    }
    void display()
    {
       cout<<"hour"<<hr<<endl;
       cout<<"min"<<meen<<endl;
       cout<<"sec"<<sec<<endl;
    }
};
main()
{
    date d1(10,40,80),d2(12,34,56),d3;
   d3= d3.adddate(d1,d2);
    d3.display();
    return 0;
}