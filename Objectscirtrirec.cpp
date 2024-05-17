#include<iostream>
#include<cmath>
using namespace std;
float const pi=3.1415;
class Circle
{
    private:
    float radius;
    public:
    void getradius()
    {
        cout<<"Enter the value for radius of circle ="<<endl;
        cin>>radius;
    }
    void showData()
    {
        float area=pi * radius * radius;
        float perimeter=2 * pi * radius;
        cout<<"the area of the circle is = "<<area<<endl ;
        cout<<" The perimeter of the circle is = "<<perimeter<<endl ;
    }
  
};
class Rectangle
{
    private:
    float length, breath;
    public:
    void getDimension()
    {
        cout<<"Enter the value for length  of rectangle ="<<endl;
        cin>>length;
        cout<<"Enter the value for breath  of rectangle ="<<endl;
        cin>>breath;
    }
    void showData()
    {
        cout<<"the area of the rectangle  is = "<<length * breath<<endl;
        cout<<" The perimeter of the rectangle is = "<< 2*(length+breath)<<endl;
    }
};
class Triangle
{ 
    private:
    float side1,side2,side3;
    public:
   void getDimension()
    {
        cout<<"Enter the value for 1st side  of triangle ="<<endl;
        cin>>side1;
        cout<<"Enter the value for 2nd side  of triangle ="<<endl;
        cin>>side2;
        cout<<"Enter the value for 3rd side  of triangle ="<<endl;
        cin>>side3;
    }
    void ShowData()
    {
        float s=(side1+side2+side3)/2;
        float area=s*(s-side1)*(s-side2)*(s-side3);
        cout<<"the area of the triangle  is = "<<sqrt(area)<<endl ;
        cout<<" The perimeter of the triangle is = "<<side1+side2+side3;
    }
};
int main()
{
    
    Rectangle rec;
    Triangle tri;
    Circle cir;
    cir.getradius();
    cir.showData();
    rec.getDimension();
    rec.showData();
    tri.getDimension();
    tri.ShowData();

    return 0;
}