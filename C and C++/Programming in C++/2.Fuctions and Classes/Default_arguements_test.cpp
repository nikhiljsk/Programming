#include<iostream>
#include<conio.h>
using namespace std;
void display(int n=2,char ch='*');
int main()
{
	int m=3,p=4;
	char c='#';
	display();
	display(m);
	display(p,c);
	getch();
	return 0;
}
void display(int x,char y)
{
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=x;j++)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}
}
