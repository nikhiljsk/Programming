#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"Weekdays\n";
	cout<<"1-Monday\n";
	cout<<"2-Tuesday\n";
	cout<<"3-Wednesday\n4-Thursday\n5-Friday\n6-Saturday\n7-Sunday";
	enum weekdays {monday=1,tuesday,wednesday=6,thursday,friday,saturday=19,sunday};
	int choice;
	cout<<"choice:";
	cin>>choice;
	switch(choice)
	{
		case monday :
			cout<<"You have chosen monday";
		case tuesday :
				cout<<"You have chosen tuesday";
		case wednesday :
					cout<<"You have chosen wednesday";
		case thursday :
					cout<<"You have chosen thursday";
		case friday :
					cout<<"You have chosen friday";
		case saturday :
					cout<<"You have chosen saturday";				
		case sunday :
									cout<<"You have chosen sunday";
	}
	getch();
}
