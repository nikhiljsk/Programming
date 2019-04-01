//call by value
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void dis(int x,int y,int z);
class x
{
	int p,q,r;
	public:
		void get()
		{
			cout<<"Enter three subject marks"<<endl;
			cin>>p>>q>>r;
			if(p<0||q<0||r<0)
			{
				cout<<"Entered marks are wrong"<<endl;
				exit(0);
			}
			dis(p,q,r);
		}
}y;
void dis(int x,int y,int z)
{
	int sum=(x+y+z)/3;
	cout<<"Percentage is "<<sum<<endl;
}
int main()
{
	y.get();
	return 0;
	getch();
	
}
