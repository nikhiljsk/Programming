#include<iostream>
using namespace std;
int main()
{
	int *p=new int [10];
	int sump=0,sumn=0,countp=0,countn=0;
	cout<<"Enter"<<endl;
	for(int i=0;i<10;i++)
	cin>>*(p+i);
	for(int i=0;i<10;i++)
	{
		if(*(p+i)>0)
		{
			sump=sump+*(p+i);
			countp++;
		}
		else
		{
			sumn=sumn+*(p+i);
			countn++;
		}
	}
	int avgp=sump/countp;
	int avgn=sumn/countn;
	cout<<avgp<<endl<<avgn;
	return 0;
}
