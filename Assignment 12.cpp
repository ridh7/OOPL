//============================================================================
// Name        : Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque <int> gq;
    int n,e;
    char c;
    do
    {
    	cout<<"Enter you choice  : \n1.Insert from front\n2.Insert from back\n3.Delete from front\n4.Delete from back\n5.Display deque\n6.Size of deque\n7.Display front\n8.Display back\n";
    	cin>>e;
    	switch(e)
    	{
    	case 1:
    		cout<<"Element : ";
    		cin>>n;
    		gq.push_front(n);
    		cout<<"Element has been inserted from the front"<<endl;
    		break;
    	case 2:
    		cout<<"Element : ";
    		cin>>n;
    		gq.push_back(n);
    		cout<<"Element has been inserted from the back"<<endl;
    		break;
    	case 3:
    		gq.pop_front();
    		cout<<"Element has been deleted from the front"<<endl;
    		break;
    	case 4:
    		gq.pop_back();
    		cout<<"Element has been deleted from the back"<<endl;
    		break;
    	case 5:
    		showdq(gq);
    		break;
    	case 6:
    		cout<<"Size of deque is "<<gq.size()<<endl;
    		break;
    	case 7:
    		cout<<"Front : "<<gq.front()<<endl;
    		break;
    	case 8:
    		cout<<"Back : "<<gq.back()<<endl;;
    		break;
    	default:
    		cout<<"Please enter a valid option"<<endl;
    	}
    	cout<<"Would you like to continue? (Y/N) ";
    	cin>>c;
    }
    while(c=='y'||c=='Y');
    if(c=='n'||c=='N')
    	cout<<"Exit";

    return 0;
}
