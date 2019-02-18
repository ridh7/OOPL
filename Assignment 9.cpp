//============================================================================
// Name        : frees.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;

class student
{
string name;
int div;
public:
void input()
{
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your division:";
cin>>div;
}
void print()
{
cout<<"Name: "<<name<<endl;
cout<<"Division: "<<div<<endl;
}
};
int main() {
	student r[10];
	int i,n;
	cout<<"Enter limit:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		r[i].input();
	ofstream o("com.txt",ios::binary);
	for(i=0;i<n;i++)
		o.write((char*)&r[i],sizeof(r[i]));
	o.close();
	ifstream ri("com.txt",ios::binary);
	for(i=0;i<n;i++)
	{
		ri.read((char*)&r[i],sizeof(r[i]));
	}
	for(i=0;i<n;i++)
		r[i].print();
	return 0;
}
