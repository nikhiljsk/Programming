#include<iostream>
#include<conio.h>
using namespace std;
class he{
	int a;
	public:
		he()
		{
			cout<<"Base constructor"<<endl;
		}
		~he()
		{
			cout<<"Base destructor"<<endl;
		}
};
class ho:public he{
	public:
		ho()
		{
			cout<<"Derived constructor"<<endl;
		}
		~ho()
		{
			cout<<"Derived destructor"<<endl;
		}
		void display()
		{
			cout<<"h"<<endl;
		}
};
int main()
{
	{
	ho h;
	}
	//cout<<a;      //this cannot be done since the scope of variable a is different
	//h.display(); //this cannot be done since the scope of obj is different
	getch();
	return 0;
}
