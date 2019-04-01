#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class student
{
char name[10];
int roll,age,cgpa;
float height;
public:
	void get();
	void display();
	int search();
};
void student::get()
{
	cout<<"Enter your name,roll no,age,cgpa and height"<<endl;
	cin>>name>>roll>>age>>cgpa>>height;
}
void student::display()
{
	cout<<name<<setw(5)<<roll<<setw(5)<<age<<setw(5)<<cgpa<<setw(5)<<height<<setw(5)<<endl;
}
int student::search()
{
	return roll;
}
int main()
{
	
	int z;
	cout<<"Enter the number of entries"<<endl;
	cin>>z;
	student a[z];
	int i,r;
	for(i=0;i<z;i++)
	{
		a[i].get();
	}
	cout<<"Name  Roll  Age CGPA Height    "<<endl;
		for(i=0;i<z;i++)
	{
		a[i].display();
	}
	cout<<"Enter the value of roll "<<endl;
	cin>>r;
		for(i=0;i<z;i++)
	{
		//a[i].roll is not accessible(private) in the main function 
		//so a function from the class is used to return the values used in the private class
		//Else a function can be used to search by passing the value 'r' to it
		if(a[i].search()==r)
		{
		cout<<"Data found"<<endl;
		a[i].display();
		}
	}
	
}

