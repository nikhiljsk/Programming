#include<iostream>
using namespace std;
int main()
{
	int *p=new int [10];
	for(int i=0;i<10;i++)
	cin>>*(p+i);
	for(int i=0;i<10;i++)
	{
		if(*(p+i)%2==0)
		cout<<*(p+i);
	}
	return 0;
}
