#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class lpu
{
private:
	char k[10],l[10],q[10];
	int x,y;
	
public:
void student(char n[10])
{
	strcpy(k,n);
	cout<<"Student name:"<<k<<endl;
}
void student(char f[10],char m[10])
{
	strcpy(l,f);
	strcpy(q,m);
	cout<<"Father name:"<<l<<endl<<"Mother name:"<<q<<endl;
}
void student(int a,int  b)
{
	x=a;
	y=b;
	cout<<"Age:"<<x<<endl<<"Fee due:"<<y<<endl;
	if(x>15)
	{
		cout<<"You are eligible for admission"<<endl;
	}
	else
	cout<<"You are not eligible for an admission"<<endl;
}
}a;
int main()
{
	int a1,b;
	char f[10],m[10],n[10];
	cout<<"Enter name,father name,mother name,your age and fee due"<<endl;
	cin>>n>>f>>m>>a1>>b;
	a.student(n);
	a.student(f,m);
	a.student(a1,b);
	getch();
	return 0;
}


