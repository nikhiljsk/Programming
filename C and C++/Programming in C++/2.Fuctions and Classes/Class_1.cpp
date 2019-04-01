#include<iostream>
#include<conio.h>
using namespace std;
class lovely
{
	private:
			 int chassis,engine,year;
			 char mod[10],man[10],col[20];
	public:
		void getdata()
		{
			cout<<"Enter car manufacturer"<<endl;
			cin>>man;
			cout<<"Enter car model"<<endl;
			cin>>mod;
			cout<<"Enter car color"<<endl;
			cin>>col;
			cout<<"Enter engine and chassis numbers"<<endl;
			cin>>engine>>chassis;
			cout<<"Enter the year of manufacture";
			cin>>year; 
		}
		void display()
		{
			cout<<"Entered car manufacturer :"<<man<<endl;
			cout<<"Entered car model : "<<mod<<"\n";
			cout<<"Entered car color : "<<col<<endl;
			cout<<"Entered engine no : "<<engine<<endl;
			cout<<"Entered chassis no : "<<chassis<<endl;
			cout<<"Entered year of manufacture : "<<year;
		}
}l,l1;
int main()
{
	//lovely l;
	l.getdata();
	l.display();
	//lovely l1;
	l1.getdata();
	l1.display();
	return 0;
	getch();
}
