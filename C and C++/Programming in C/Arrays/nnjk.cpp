#include<iostream>
using namespace std;
int main()
{
	int t,n,i,a,rev=0;
	cin>>n;
	t=n;
	while(n!=0)
	{
	a=n%10;
	n=n/10;
	rev=rev*10+a;	
	}
	if(t==rev)
	{
		cout<<"p"<<endl;
	}
	else
	cout<<"n"<<endl;
}
