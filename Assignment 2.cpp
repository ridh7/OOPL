//============================================================================
// Name        : Calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Calculator
{
private:
	int a,b;
	double res;
	string e;
	char o;
public:
	Calculator()
	{
	do
	{
	cout<<"Enter the desired operation : "<<endl;
	cin>>a>>o>>b;
	switch(o)
	{
	case '+': res=a+b;
	break;
	case '-' : res=a-b;
	break;
	case '*' : res=a*b;
	break;
	case '/' : res=a/b;
	break;
	default : cout<<"Please enter valid response"<<endl;
	}
	cout<<"The result is : "<<res<<endl;
	cout<<"Would you like to perform another operation? (Y/N)"<<endl;
	cin>>e;
	}
	while(e=="Y");
	if(e=="N")
		cout<<"Thank you for using the calculator!";
	}
};

int main() {
	Calculator ob1;
	return 0;
}
