#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"please inter the Character";
	cin>>ch;
	if(ch>='a'&&ch<='z')
	{
		cout<<"The Character is lower case";
	}
	else if (ch>='A'&&ch<='Z')
	{
		cout<<"The Character is uper case";
	}
	else
	{
		cout<<"This is not Alphabit Character  ";
	}
	return 0;
}
