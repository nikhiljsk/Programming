//class to class type
//WAP to convert $ into rupees by using constructor
#include<iostream>
#include<conio.h>
using namespace std;
class rup
{
	float a;
	public:
		rup(float x)
		{
		a=x*70;	
		}
		void show()
		{
			cout<<a;
		}
};
class dol
{
	float b;
	public:
		dol()
		{
			cout<<"Enter"<<endl;
			cin>>b;
		}
};
int main()
{
	dol b;
	b=rup a;
	a.show();
	getch();
	return 0;
}
