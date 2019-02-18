//============================================================================
// Name        : Assignment14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class ExceptionH{
public:
	int age;
	double income;
	string city;
	char veh;
	ExceptionH()
	{

	}
	ExceptionH(int a)
	{
		age=a;
	}
	ExceptionH(double i)
	{
		income=i;
	}
	ExceptionH(string c)
	{
		city=c;
	}
	ExceptionH(char v)
	{
		veh=v;
	}
	void E_Age()
	{
		cout<<"Invalid age"<<endl;
	}
	void E_Income()
	{
		cout<<"Invalid income"<<endl;
	}
	void E_City()
	{
		cout<<"Invalid city"<<endl;
	}
	void E_Vehicle()
	{
		cout<<"Invalid option"<<endl;
	}
};

int main() {
	ExceptionH o1;
	try
	{
		cout<<"Enter age : ";
		cin>>o1.age;
		if(o1.age<18||o1.age>55)
			throw ExceptionH(o1.age);
		else
			cout<<"Age : "<<o1.age<<endl;
	}
	catch(ExceptionH e)
	{
		e.E_Age();
	}
	try
	{
		cout<<"Enter income : ";
		cin>>o1.income;
		if(o1.income>100000||o1.income<50000)
			throw ExceptionH(o1.income);
		else
			cout<<"Income : "<<o1.income<<endl;
	}
	catch(ExceptionH e)
	{
		e.E_Income();
	}
	try
	{
		cout<<"Enter city : ";
		cin>>o1.city;
		if(o1.city!="Pune"&&o1.city!="Mumbai"&&o1.city!="Chennai"&&o1.city!="Bangalore")
			throw ExceptionH(o1.city);
		else
			cout<<"City : "<<o1.city<<endl;
	}
	catch(ExceptionH e)
	{
		e.E_City();
	}
	try
	{
		cout<<"Does user have a 4-wheeler? (Y/N): ";
		cin>>o1.veh;
		if(o1.veh!='Y'&&o1.veh!='N')
			throw ExceptionH(o1.veh);
		else
			{
			if(o1.veh=='Y')
				cout<<"Yes the user has a 4-wheeler";
			else
				cout<<"No the user does not have a 4-wheeler";
			}
	}
	catch(ExceptionH e)
	{
		e.E_Vehicle();
	}
	return 0;
}
