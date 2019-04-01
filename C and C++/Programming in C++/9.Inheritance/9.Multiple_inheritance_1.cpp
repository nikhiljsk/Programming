#include<iostream>
#include<conio.h>
using namespace std;
class pub{
	protected:
		string name;
		public:
			void get()
			{
				cout<<"Enter the name of the publisher"<<endl;
				cin>>name;
			}
};
class author{
	protected:
		string aname;
		public:
			void getda()
			{
				cout<<"Enter the name of the author"<<endl;
				cin>>aname;
			}
};
class book_details:public pub,public author{	
char a[10];
public:
	void getd()
	{
		cin>>a;
	}
	void display()
	{
		cout<<name<<ends<<aname<<ends<<a;
	}
};
int main()
{
	book_details b;
	b.get();
	b.getda();
	b.getd();
	b.display();
	return 0;
	getch();
}
