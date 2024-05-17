#include<iostream>
using namespace std;
class incomeTax
{
    float salary,taxsal;
    public:
    void getSalary()
    {
        cout<<"Enter the salary ";
        cin>>salary;
    }
    inline void ShowSalary()
    {
        taxsal=(salary-(0.1*salary));
        cout<<"The salary after tax cutoff = "<<taxsal;

    }
};
int main()
{
    incomeTax IT;
    IT.getSalary();
    IT.ShowSalary();
    return 0;
}