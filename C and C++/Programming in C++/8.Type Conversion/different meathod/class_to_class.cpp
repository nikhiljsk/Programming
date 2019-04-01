//class to class type
//WAP to convert $ into rupees firstly by using casting operator and then by constructor
#include<iostream>
#include<conio.h>
using namespace std;
class rup//destination
{
	float a;
	public:
		rup(float x)
		{
		a=x*70;	
		}
		operator float()//member function not a friend function
		{
			return a;
		}
};
class dol//source
{
	public:
		float b;
		dol()
		{
			cout<<"Enter"<<endl;
			cin>>b;
		}
		operator float()
		{
			return b;
		}
};
int main()
{
	dol b;
	float z,y;
	z=b;
	rup a(z);
	y=a;
	cout<<y;
	getch();
	return 0;
}
