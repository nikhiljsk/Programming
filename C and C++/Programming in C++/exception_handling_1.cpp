#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string h="hello";
	int son=40,mom=200;
	try
	{
		if(son<mom)
		throw 1;
			try
			{
		
				if (son>mom)
				throw h;
				cout<<"Both are perfect"<<endl;
			}
			catch(...)
			{
			cout<<"error "<<endl;
			}
	}
	catch(int a)
	{
		cout<<"bye"<<ends<<a;
	}
	getch();
}
