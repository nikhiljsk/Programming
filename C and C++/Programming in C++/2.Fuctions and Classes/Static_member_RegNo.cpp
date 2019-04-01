
#include<iostream>
#include<conio.h>
using namespace std;
class lpu
{
	private:
		static int regno1,regno2;
		char name[10],pro[10];
		int dob,year;
		float per;
	public:
		void enter();
		void reg();
		//void display();
}a[3];
int lpu::regno1=20170000;
int lpu::regno2=20180000;
void lpu::enter()
{
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Enter your dob"<<endl;
	cin>>dob;
	cout<<"Enter your percentage in class 12"<<endl;
	cin>>per;
	cout<<"Enter the course you want to register in "<<endl;
	cin>>pro;
	cout<<"Enter the year of admission"<<endl;
	cin>>year;
	int r=year%10;
	if(r==7) 
	regno1++;
	if(r==8)
	regno2++;
}
void lpu::reg()
{
	if(year%10==7)
	cout<<"The generated reg. no is "<<regno1<<endl;
	else if(year%10==8)
	cout<<"The generated reg. no is "<<regno2<<endl;
	else if(year<2016||year>2021)
	cout<<"Invalid"<<endl;
	else
	cout<<"Admissions not yet started"<<endl;
}

int main()
{int i,k;
cout<<"Enter the number of students"<<endl;
cin>>k;
for(i=0;i<k;i++)
{
	a[i].enter();
	a[i].reg();
}
	getch();
	return 0;
	
}
