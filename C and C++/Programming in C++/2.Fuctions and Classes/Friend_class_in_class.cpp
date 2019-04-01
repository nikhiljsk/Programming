#include<iostream>
#include<conio.h>
using namespace std;
class sum;
class ab
{
	int a,b;
	public:
		void get()
	{
		cout<<"Enter a and b"<<endl;
		cin>>a>>b;
	}	
	friend class sum;
}z;
class sum
{
	public:
	void sum1()
	{
	int s;
	s=z.a+z.b;
	cout<<"sum is "<<s;
	}
}y;
int main()
{
	z.get();
	y.sum1();
}
