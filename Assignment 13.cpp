//============================================================================
// Name        : Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int d[10];
	int e,n;
	char c;
	cout<<"Enter your list:"<<endl;
	for(int i=0;i<10;i++)
		cin>>d[i];
	cout<<"Your list is :"<<endl;
	for(int i=0;i<10;i++)
		cout<<d[i]<<" ";
	cout<<endl;
	do
	{
		cout<<"Enter your choice: \n1.Search\n2.Sort\n";
		cin>>e;
		switch(e)
		{
		case 1:
			cout<<"Enter element to be searched for: ";
			cin>>n;
			if(binary_search(d,d+10,n))
				cout<<"Element is present!"<<endl;
			else
				cout<<"Element is absent!"<<endl;
			break;
		case 2:
			sort(d,d+10);
			for(int i=0;i<10;i++)
				cout<<d[i]<<" ";
			break;
		default:
			cout<<"Invalid option";
		}
		cout<<"Continue?";
		cin>>c;
	}
	while(c=='Y'||c=='y');
	cout<<"Exit";
	return 0;
}
