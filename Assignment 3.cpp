//============================================================================
// Name        : Complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex{
private : double real,imag;
public: Complex(double r=0,double i=0)
{
	real=r;
	imag=i;
}
Complex operator + (Complex const &obj)
{
	Complex res;
	res.real=real+obj.real;
	res.imag=imag+obj.imag;
	return res;
}
Complex operator - (Complex const &obj)
{
	Complex res;
	res.real=real-obj.real;
	res.imag=imag-obj.imag;
	return res;
}
Complex operator * (Complex const &obj)
{
	Complex res;
	res.real=real*obj.real-imag*obj.imag;
	res.imag=real*obj.imag+obj.real*imag;
	return res;
}
Complex operator / (Complex const &obj)
{
	Complex res;
	res.real=(real*obj.real+imag*obj.imag)/(obj.real*obj.real+obj.imag*obj.imag);
	res.imag=(obj.real*imag-real*obj.imag)/(obj.real*obj.real+obj.imag*obj.imag);
	return res;
}
friend ostream &operator << (ostream &o, Complex &c);
friend istream &operator >> (istream &o, Complex &c);
};
ostream &operator << (ostream &o,Complex &c)
{
	o<<c.real;
	cout<<"+ i";
	o<<c.imag;
	return o;
}
istream &operator >> (istream &o,Complex &c)
{
	cout<<"Enter real part : ";
	o>>c.real;
	cout<<"Enter imaginary part : ";
	o>>c.imag;
	return o;
}

int main() {
	double a,b,c,d;
	Complex c1,c2,c3;
	char o;
	string e;
	cout<<"Enter the first number : "<<endl;
	cin>>c1;
	cout<<c1<<endl;
	cout<<"Enter the second number : "<<endl;
	cin>>c2;
	cout<<c2<<endl;
	do
	{
	cout<<"Enter operator : ";
	cin>>o;
	switch(o)
	{
	case '+' : c3=c1+c2;
	cout<<"Addition : ";
	cout<<c3;
	cout<<endl;
	break;
	case '-' : c3=c1-c2;
	cout<<"Subtraction : ";
	cout<<c3;
	cout<<endl;
	break;
	case '*' : c3=c1*c2;
	cout<<"Multiplication : ";
	cout<<c3;
	cout<<endl;
	break;
	case '/' : c3=c1/c2;
	cout<<"Division : ";
	cout<<c3;
	cout<<endl;
	break;
	default : cout<<"Please enter a valid option"<<endl;
	}
	cout<<"Would you like to perform another operation? (Y/N)"<<endl;
	cin>>e;
	}
	while(e=="Y");
	if(e=="N")
	cout<<"Thank you for using the calculator!";
	return 0;
}
