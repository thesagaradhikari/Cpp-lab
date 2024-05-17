#include<iostream>
using namespace std;
namespace Square
{
    int num;
    int fun(int number)
    {
        return number*number;
    }
}
namespace Cube
{
    int num;
    int fun(int number)
    {
        return number*number*number;
    }
}
int main()
{
    cout<<"Enter the value to give to square namespace = ";
    cin>>Square::num;
    cout<<"Enter the value to give to cube namespace = ";
    cin>>Cube::num;
    cout<<"The cube of integer variable num of square namespace = "<<Cube::fun(Square::num)<<endl;//using fun of cube
    cout<<"The square of integer variable num of cube namespace = "<<Square::fun(Cube::num)<<endl;//using fun of square
    return 0;
}