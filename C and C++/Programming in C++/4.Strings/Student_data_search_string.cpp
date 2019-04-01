#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
class student
{
char name[10],str[10];
int age,cgpa;
float height;
public:
	void get();
	void display();
	char* search()
	{
	return name;
	}
};
void student::get()
{
	cout<<"Enter your name,roll no,age,cgpa and height"<<endl;
	cin>>name>>str>>age>>cgpa>>height;
}
void student::display()
{
	cout<<name<<setw(5)<<str<<setw(5)<<age<<setw(5)<<cgpa<<setw(5)<<height<<setw(5)<<endl;
}
int main()
{
	
	int z;
	cout<<"Enter the number of entries"<<endl;
	cin>>z;
	student a[z];
	int i;
	char n[10];
	for(i=0;i<z;i++)
	{
		a[i].get();
	}
	cout<<"Name  Roll  Age CGPA Height    "<<endl;
		for(i=0;i<z;i++)
	{
		a[i].display();
	}
	cout<<"Enter the string "<<endl;
	cin>>n;
		for(i=0;i<z;i++)
	{
		if(strcmp(n,a[i].search())==0)
		{
		cout<<"Data found"<<endl;
		a[i].display();
		}
	}
	
}

