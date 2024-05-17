#include<iostream>
using namespace std;
class EmployeeReport
{
    private:
    int employeeId, overtimeYear;
    float totalBonus, totalOvertime;
    public:
    void setpara(int eid, float tobo, float toov, int year)
    {
        employeeId=eid;
        totalBonus=tobo;
        totalOvertime=toov;
        overtimeYear=year;
    }
    void displayreport()
    {
        cout<<"An employee with Employee ID "<<employeeId<<" has received Rs "<<totalBonus<<" as a bonus"<<endl;
        cout<<"and had worked "<<totalOvertime<< " hours as overtime in the year "<<overtimeYear<<endl<<endl;
    }

};
int main()
{
    int n;
    int employeeid, year;
    float bonus, time;
    cout<<"Enter the number of employee to register = ";
    cin>>n;
    EmployeeReport er[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details of employee no "<<i+1<<endl;
        cout<<"Employee id: ";
        cin>>employeeid;
        cout<<"Total bonus obatined: ";
        cin>>bonus;
        cout<<"Overtime in hour: ";
        cin>>time;
        cout<<"Which year the overtime was done: ";
        cin>>year;
        er[i].setpara(employeeid, bonus, time, year);
    }
    for(int i=0;i<n;i++)
    {
        cout << "Report for employee no " << i+1 << endl;
        er[i].displayreport();
    }
   getchar( );
   
}