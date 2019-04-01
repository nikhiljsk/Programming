//WS?
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	float f;
	cout<<"Enter any interger";
	cin>>a;
	cout<<"No is :"<<a<<endl;
	cout<<"with setw: "<<setw(8)<<a<<endl;
	cout<<"with setfill :"<<setw(7)<<setfill('*')<<a<<endl;
	cout<<"Decimal base: "<<dec<<a<<endl;
	cout<<"Octal base: "<<oct<<a<<endl;
	cout<<"hexadecimal base "<<hex<<a<<endl;
	cout<<"Enter the value of float";
	cin>>f;
	cout<<"with setprecsion : "<<setprecision(4)<<f<<endl;
	cout<<"Lovely"<<ends;
	cout<<"Professional "<<endl;
	cout<<"University";
	getch();
	return 0;
}
