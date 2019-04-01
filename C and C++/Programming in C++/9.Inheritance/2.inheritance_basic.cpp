//WAP to display the info of a student using inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class human{
	protected:
	int age;
	char name[10];
	public:
	void getdata()
	{
		cout<<"Enter age and name"<<endl;
		cin>>age>>name;
	}
};
class student:public human
{
	char course[10]="maths",sec[10]="K1615";
	int a,b;
	public:
		void markscalculation()
		{
			cout<<"Enter the marks of 2 subjects"<<endl;
			cin>>a>>b;
			cout<<"Avg is "<<(a+b)/2;
		}
		void display()
		{
			cout<<endl<<"Info"<<endl;
			cout<<ends<<age<<ends<<name<<ends<<course<<ends<<sec<<ends<<(a+b)/2<<endl;//resuage of the code in form of members and member function
		//	cout<<"data in student class is "<<age<<ends<<name;
		}
}s;
int main()
{
	s.getdata();
	s.markscalculation();
	s.display();
	return 0;
	getch();
}
