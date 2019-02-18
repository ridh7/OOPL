//============================================================================
// Name        : assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class student
{
	static int count;
string name,BG,std,div,add,drino;
int rollno,dd,mm,yyyy;
long int phno;
public:
student()
{
	rollno=0;
	dd=0;mm=0;yyyy=0;
	phno=0;
	name="no string";
	BG="no string";
	std="no string";
	div="no string";
	add="no string";
	drino="no string";
	count++;
}
student(int r,int d,int m,int y,long int p,string n,string B,string s,string di,string a,string dri)
{
	this->name=n;
	this->std=s;
	this->div=di;
	this->rollno=r;
	this->dd=d;
	this->mm=m;
	this->yyyy=y;
	this->BG=B;
	this->add=a;
	this->phno=p;
	this->drino=dri;
	count++;
			}
student(const student&s2)
{
	name=s2.name;
	std=s2.std;
	div=s2.div;
	rollno=s2.rollno;
	dd=s2.dd;
	mm=s2.mm;
	yyyy=s2.yyyy;
	BG=s2.BG;
	add=s2.add;
	phno=s2.phno;
	drino=s2.drino;
	count++;
	}
void input()
{
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter the class:"<<endl;
	cin>>std;
	cout<<"Enter division"<<endl;
	cin>>div;
	cout<<"Enter roll no:"<<endl;
	cin>>rollno;
	cout<<"ENter date of birth:"<<endl;
	cin>>dd>>mm>>yyyy;
	cout<<"Enter blood group:"<<endl;
	cin>>BG;
	cout<<"Enter Address:"<<endl;
	cin>>add;
	cout<<"Enter Contacting number"<<endl;
	cin>>phno;
	cout<<"Enter driving license no:"<<endl;
	cin>>drino;
}
static void coun()
{
	cout<<count;
}
void print()
{
cout<<name<<"\n"<<std<<"\n"<<div<<"\n"<<rollno<<"\n"<<dd<<"/"<<mm<<"/"<<yyyy<<"\n"<<BG<<"\n"<<add<<"\n"<<phno<<"\n"<<drino<<"\n";
}
~student()
{
}

};
int student::count=0;
int main()
{
int i,n,ch;
string s;
student *s1[100];
cout<<"Enter the number of students:"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
	s1[i]=new student;
	s1[i]->input();
}
for(i=0;i<n;i++)
s1[i]->print();
for(i=0;i<n;i++)
{
delete s1[i];
}
student s2(123,11,12,1999,987654,"ritesh","B+","SE","2nd","bsackbwak","fowjiwqenkc");
student s3(s2);
student s4;
do
{
	cout<<"Enter choice:\n1)P constructor\n2)Copy constructor\n3)To display count";
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"P constructor:"<<endl;
		  s2.print();
		  break;
	case 2:cout<<"Copy constructor:"<<endl;
		   s3.print();
		   break;
	case 3:cout<<"count:";
			s4.coun();
		   break;
	default:cout<<"wrong choice";
	}
	cout<<"to continue press y";
	cin>>s;
}while(s=="y");
return 0;
}

