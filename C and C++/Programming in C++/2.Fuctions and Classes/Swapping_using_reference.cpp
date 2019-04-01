#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &,int &);
int main()
{
	int a=5,b=10;
	swap(a,b);
	cout<<"Values after fuction calling are"<<ends<<a<<ends<<b<<endl;
	return 0;
	getch();
	
}
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"values of a and b in fuction"<<ends<<a<<ends<<b<<endl;
}

