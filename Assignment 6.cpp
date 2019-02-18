//============================================================================
// Name        : Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Personal{
public:
	string name,phone,add;
	double dob;
	Personal()
	{
		cout<<"Constructor of Personal class!"<<endl;
	}
	void input()
	{
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter phone number : ";
		cin>>phone;
		cout<<"Enter DOB(DDMMYYYY) : ";
		cin>>dob;
		cout<<"Enter address : ";
		cin>>add;
	}
	void output()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Phone number : "<<phone<<endl;
		cout<<"Date of Birth : "<<dob<<endl;
		cout<<"Address : "<<add<<endl;
	}
};
class Professional
{
public:
	string comp,desig;
	Professional()
	{
		cout<<"Constructor of Professional class!"<<endl;
	}
	void input()
	{
		cout<<"Enter company name : ";
		cin>>comp;
		cout<<"Enter designation : ";
		cin>>desig;
	}
	void output()
	{
		cout<<"Company : "<<comp<<endl;
		cout<<"Designation : "<<desig<<endl;
	}
};
class Academic
{
public:
	string qual;
	float hsc,ssc;
	Academic()
	{
		cout<<"Constructor of Academic class called!"<<endl;
	}
	void input()
	{
		cout<<"Enter qualification : ";
		cin>>qual;
		cout<<"Enter HSC percentage : ";
		cin>>hsc;
		cout<<"Enter SSC percentage : ";
		cin>>ssc;
	}
	void output()
	{
		cout<<"Qualification : "<<qual<<endl;
		cout<<"HSC percentage : "<<hsc<<endl;
		cout<<"SSC percentage : "<<ssc<<endl;
	}
};
class Bio: public Personal, public Professional, public Academic{
public:
	void input()
	{
		Personal::input();
		Professional::input();
		Academic::input();
	}
	void output()
	{
		Personal::output();
		Professional::output();
		Academic::output();
	}
};
int main() {
	Bio o1;
	o1.input();
	o1.output();
	return 0;
}
