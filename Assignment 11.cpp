//============================================================================
// Name        : stl.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

void stackdetails(stack <int> st)
{
	stack <int> s=st;
	cout<<"The stack is:"<<endl;
	while(!s.empty())
	{
		cout<<s.top();
		cout<<" ";
		s.pop();
	}
	cout<<endl;
}
void queuedetails(queue <int> qu)
{
	queue<int>q = qu;
	cout<<"The queue is:";
	while(!q.empty())
		{
			cout<<q.front();
			cout<<" ";
			q.pop();
		}
	cout<<endl;
}
int main() {

	int ch,x,y,i,a,b;
	char c;
	stack<int>sta;
	queue<int> que;
	do
	{
		cout<<"Enter choice:\n1)Enter the elements in the stack:\n2)Enter the elements in the queue:\n3)Delete the element from the stack:\n4)Delete the element from the queue:\n5)Display the size of the stack:\n6)Display the size of the queue:\n7)Display the top most element in the stack:\n8)Display the top most element in the queue:\n9)Display the stack:\n10)Display the queue:"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1: cout<<"Enter the number of elements in stack:"<<endl;
			    cin>>x;
			    for(i=1;i<=x;i++)
			    {
			    cout<<"Enter the"<<" "<<i<<" "<<"element:";
			    cin>>a;
			    sta.push(a);
			    }
			    break;
		case 2: cout<<"Enter the number of elements in queue:"<<endl;
	    		cin>>y;
	    		for(i=1;i<=y;i++)
	    		{
	    		cout<<"Enter the"<<" "<<i<<" "<<"element:";
	    		cin>>b;
	    		que.push(b);
	    		}
	    		break;
		case 3: sta.pop();
			    stackdetails(sta);
			    break;
		case 4: que.pop();
			    queuedetails(que);
			    break;
		case 5: cout<<"Size of stack is:"<<sta.size()<<endl;
			    break;
		case 6:	cout<<"Size of the queue is:"<<que.size()<<endl;
				break;
		case 7: cout<<"Top element of stack is:"<<sta.top()<<endl;
			    break;
		case 8:	cout<<"Front element of the queue is:"<<que.front()<<endl;
				cout<<"Back element of the queue is:"<<que.back()<<endl;
				break;
		case 9: stackdetails(sta);
			    break;
		case 10: queuedetails(que);
				 break;
		}
 		cout<<"Continue? (Y/N) ";
		cin>>c;
	}while(c=='y'||c=='Y');
return 0;
}
