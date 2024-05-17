#include<iostream>
using namespace std;
class PrimeOrNot
{
    public:
    int number;
    bool primeCheck()
    {
        bool flag=true;
        for(int i=2;i<number;i++)
        {
            if(number%i==0)
            {
                flag=false;
                return flag;
            }
            return flag;
        }
    }

};
int main()
{ 
    char answer;
    do
    {
        int num;
        
        PrimeOrNot p;
        cout<<"enter the number"<<endl;
        cin>>num;
        p.number=num;
        if(p.primeCheck())
        cout<<"prime"<<endl;
        else
        cout<<"not prime"<<endl;
        cout<<"Enter y to check another number else enter n to exit"<<endl;
        cin>>answer;
    } while (answer=='y');
    
}