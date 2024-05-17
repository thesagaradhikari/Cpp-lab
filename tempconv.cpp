#include<iostream>
using namespace std;
class Celsius
{
	private:
	float fahren, celsius;
	public:
	float toCelsius(float f)
	{
		return (f-32)* 5.0/9.0;
		
	}
	
};
class Fahrenheit
{
	private:
	float fahren, celsius;
	public:
	float toFarhrenheit(float c)
	{
		
		return (c*9.0/5.0)+32;
		
	}

};
int main()
{
	// define an object of Temperature class
	int a;
    cout<<"Enter to which temperature you want to convert"<<endl<<"enter '0' for celsius or '1' for fahrenheit"<<endl;
	cin>>a;
	if(a==1)
	{
	Fahrenheit f;
	float c;
	cout<<"Enter Temperature in Celsius=";
	cin>>c;
	cout<<"Temperature in Fahrenheit="<<f.toFarhrenheit(c);
	}
	else{
	Celsius c;
	float f;
	cout<<"Enter Temperature in Fahrenheit=";
	cin>>f;
	// call conversion function with object t
	cout<<"Temperature in Celsius="<<c.toCelsius(f);
	}
return 0;
}