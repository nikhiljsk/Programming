#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class LPU
{
	private:
	static int g;
	int clas,regno;
	char name[10];
	public:
		void input(int x,int y,char p[]);
		void display();
		 static void output();//even if static is not used output will be the same
}a,b,c;
int LPU::g;//definition
void LPU::input(int x,int y,char p[10])
{
	clas=x;
	regno=y;
	strcpy(name,p);
	g++;
}
void LPU::display()
{
	cout<<"Class: "<<clas<<endl;
	cout<<"Regno: "<<regno<<endl;
	cout<<"Name: "<<name<<endl;
}
void LPU::output()
{
	cout<<"count is "<<g<<endl;
}
int main()
{
	char p[10]="HI Hello";
	char q[10]="bye";
	char r[10]="world";
	a.input(2,3,p);
	a.display();//member functions cannot be declared without object
	LPU::output();//a.output();//static member funtions can be declared with or without object
	b.input(3,4,q);
	b.display();
	b.output();
	c.input(5,6,r);
	c.display();
	c.output();
	return 0;
	getch();
}
