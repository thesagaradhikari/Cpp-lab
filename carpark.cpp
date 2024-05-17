#include<iostream>
using namespace std;
class carpark
{
    private:
    int carId, chargePerHour;
    float parkedTime;
    public:
    void SetData()
    {
        cout<<"Enter car id "<<endl;
        cin>>carId;
        cout<<"Enter charge per hour "<<endl;

        cin>>chargePerHour;
        cout<<"Enter parked time in hour "<<endl ;
        cin>>parkedTime;
    }
   
    void ShowData()
    {
        cout<<"Details of car no "<<carId<<endl;
        cout<<"The car was parked for = "<<parkedTime<<" hours"<<endl;
        cout<<"The charge for "<<parkedTime<<" hours = "<<chargePerHour*parkedTime;
    }

};
int main()
{   carpark a;
    a.SetData();
    a.ShowData();
    cout<<"thanks";
    return 0;
}
