//class to class type
//WAP to convert $ into rupees by using constructor
#include<iostream>
#include<conio.h>
using namespace std;
class rupees
{
	float m;
	public:
		rupees(float a )
		{
			m=a;
		}
		void show()
		{
			cout<<"Rupees = "<<m<<endl;
		}
		float getdata()
		{
			return m;
		}
};
class dollars
{
float h;
public:
	dollars()
	{
		h=0;
	}
	dollars(rupees a)
	{
		h=a.getdata()/60;
	}
	void show()
	{
	cout<<"Dollar = "<<h<<endl;
	}	
};
int main()
{
	rupees rs(180);
	dollars d=rs;
	//d=rs;
	//rs.show();
	d.show();
	getch();
	return 0;
}
