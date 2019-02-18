//============================================================================
// Name        : Quadratic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

class Quadratic
{
private: int a,b,c;
public:
      Quadratic(int a1=0, int b1=0, int c1=0)
{
	a=a1;
	b=b1;
	c=c1;
}
Quadratic operator + (Quadratic const &obj)
{
	Quadratic res;
	res.a=a+obj.a;
	res.b=b+obj.b;
	res.c=c+obj.c;
	return res;
}
void eval()
{
	int m,f;
	cout<<"Enter the value of x : ";
	cin>>f;
	m=a*f*f+b*f+c;
	cout<<m;
}
void root()
{
	double m1,m2,t;
	t=b*b-4*a*c;
	if(t>=0)
	{
	m1=(-b+sqrt(t))/2*a;
	m2=(-b-sqrt(t))/2*a;
	cout<<"roots : "<<endl<<m1<<endl<<m2<<endl;
	}
	else
		cout<<"imaginary roots"<<endl;
}
friend ostream &operator << (ostream &o, Quadratic &c)
{
	o<<c.a<<"x^2+"<<c.b<<"x+"<<c.c;
	return o;
}
friend istream &operator >> (istream &o, Quadratic &c)
{
	cout<<"Enter a : ";
	o>>c.a;
	cout<<"Enter b : ";
	o>>c.b;
	cout<<"Enter c : ";
	o>>c.c;
}
};
int main() {
	int o,f;
	char e;
	Quadratic p1,p2,p3;
	cout<<"Enter polynomial 1 :"<<endl;
	cin>>p1;
	cout<<"Polynomial 1 : "<<p1<<endl;
	cout<<"Enter polynomial 2 :"<<endl;
	cin>>p2;
	cout<<"Polynomial 2 : "<<p2<<endl;
	do
	{
		cout<<"Which operation would you like to perform?\n1.Addition\n2.Finding the value of the polynomials for any x\n3.Finding the roots of the polynomials\n";
		cin>>o;
		switch(o)
		{
		case 1 :
			p3=p1+p2;
			cout<<"Addition is : "<<p3<<endl;
			break;
		case 2 :
			cout<<"The value of polynomial 1 is : ";
			p1.eval();
			cout<<endl;
			cout<<"The value of polynomial 2 is : ";
			p2.eval();
			cout<<endl;
			break;
		case 3 :
			cout<<"Polynomial 1 has ";
			p1.root();
			cout<<"Polynomial 2 has ";
			p2.root();
			break;
		default : cout<<"Please enter a valid choice"<<endl;
		}
		cout<<"Would you like to perform another operation?"<<endl;
		cin>>e;
	}
	while(e=='Y');
	if(e=='N')
		cout<<"Thank you for using the program!";
	return 0;
}
