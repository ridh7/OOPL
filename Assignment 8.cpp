//============================================================================
// Name        : assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class s>
s sort(s a[])
{
	int i,j,n;
	s temp;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter the "<<i<<"th element: "<<endl;
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted:";
	for(i=1;i<=n;i++)
		{
		cout<<a[i]<<endl;
		}
}
int main()
{
	int a1[100],ch;
	string s;
	float a2[100];
	do{
		cout<<"Enter the choice:\n1)Integer array sorting:\n2)Float array sorting:<<endl";
		cin>>ch;
		switch(ch)
		{
			case 1:sort(a1);
			  	   break;
			case 2:sort(a2);
			       break;
			default:cout<<"you entered wrong choice";
		}
		cout<<"Do you want to continue,press y:"<<endl;
		cin>>s;
	  }while(s=="y");
	return 0;
}
