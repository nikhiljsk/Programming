#include<iostream>
#include<conio.h>
using namespace std;
class father{
	protected:
	char sname[20];
	public:
		void get()
		{
			cout<<"Enter the surname"<<endl;
			cin>>sname;
		}
	
};
class son:public father{
	char name[20];
	public:
		void getd()
		{
			cout<<"Enter the name"<<endl;
			cin>>name;
		}
		void dis()
		{
			cout<<sname<<ends<<name<<endl;
		}
	
};
int main()
{
	//father f;
	son s;
	s.get();
	s.getd();
	s.dis();
	return 0;
	getch();
}
