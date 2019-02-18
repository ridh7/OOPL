#include<iostream>
#include<string.h>
#include<cstdlib>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	string s2=" ";
	string s1=argv[2];
	string data;
	ifstream is(argv[1]);
	if(!is)
	{
		cout<<"Error...";
		exit(1);
	}
	unsigned int found;
	while(is)
	{
		getline(is,data);
		found = data.find(s1);
		while(data.find(s1)<string::npos)
			data.replace(found,s1.size(),argv[3]);
		s2=s2+data+"\n";
	}
	is.close();
	ofstream os(argv[1]);
	os<<s2;
	return 0;
}

















