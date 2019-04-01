#include<iostream>
using namespace std;
#include<conio.h>
int area(int l,int b);
int main()
{
	int l,b,r;
	cout<<"Enter any two values";
	cin>>l>>b; //cin>>l;
			   //cin>>b;
	//r=area(l,b);
	cout<<"\n Area is "<<area(l,b);
}
int area(int l,int b)
{
	int area;
	area=l*b;
	return area;
	
}
