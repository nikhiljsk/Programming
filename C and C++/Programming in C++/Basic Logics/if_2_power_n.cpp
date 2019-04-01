#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	((n & (n-1)) == 0) ? cout<<"yes" : cout<<"no";
	getch();
	return 0;
}
