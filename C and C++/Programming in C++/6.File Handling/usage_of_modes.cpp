#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream f1("123.txt",ios::out);
	f1<<"hi hello"<<endl<<"bro";
	f1.close();
	ifstream f2("123.txt",ios::in);
	char ch;
	while(!f2.eof())
	{
	f2>>ch;
	cout<<ch;
	}
	f2.close();
	ofstream f3("123.txt",ios::trunc);
	f3.close();
		ifstream f4("123.txt",ios::in);
	while(!f4.eof())
	{
	f4>>ch;
	cout<<ch;
	}
	f4.close();
	ofstream f5("124.txt",ios::ate);
	f5<<"bhayya"<<endl;
	f5.close();
			ifstream f6("124.txt",ios::in);
	while(!f6.eof())
	{
	f6>>ch;
	cout<<ch;
	}
	f6.close();
	
}
