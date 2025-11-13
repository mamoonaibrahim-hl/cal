#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b;
	cout<<"Enter the values of a and b: ";
	cin>>a>>b;
	cout<<"Addition of a and b: "<<a+b<<endl;
	cout<<"Subtraction of a and b: "<<a-b<<endl;
	cout<<"Multiplication of a and b: "<<a*b<<endl;
	if (b != 0)
		cout<<"Division of a and b: "<<a/b<<endl;
	else
		cout<<"Division of a and b: undefined (division by zero)"<<endl;

	if (b != 0)
		cout<<"Modulus of a and b: "<<fmod(a,b)<<endl;
	else
		cout<<"Modulus of a and b: undefined (division by zero)"<<endl;
	cout<<"Average of a and b: "<<(a + b) / 2.0<<endl;
	cout<<"Maximum of a and b: "<<(a > b ? a : b)<<endl;
	cout<<"Minimum of a and b: "<<(a < b ? a : b)<<endl;
	cout<<"Square of a: "<<a * a<<endl;
	cout<<"Square of b: "<<b * b<<endl;
	return 0;
}