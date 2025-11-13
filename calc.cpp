#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the values of a and b: ";
	cin>>a>>b;
	cout<<"Addition of a and b: "<<a+b<<endl;
	cout<<"Subtraction of a and b: "<<a-b<<endl;
	cout<<"Multiplication of a and b: "<<a*b<<endl;
	cout<<"Division of a and b: "<<a/b<<endl;
	cout<<"Modulus of a and b: "<<a%b<<endl;
	cout<<"Average of a and b: "<<(a + b) / 2.0<<endl;
	cout<<"Maximum of a and b: "<<(a > b ? a : b)<<endl;
	cout<<"Minimum of a and b: "<<(a < b ? a : b)<<endl;
	cout<<"Square of a: "<<a * a<<endl;
	cout<<"Square of b: "<<b * b<<endl;
	cout<<"this shit works";
	return 0;
}