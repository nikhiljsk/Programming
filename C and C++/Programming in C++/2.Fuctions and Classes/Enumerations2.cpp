#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout << "Difficulty levels\n";
	cout << "1-Easy\n2-Medium\n3-Hard";
	enum level {easy=1,medium,hard};
	int choice;
	cout << "Choice: ";
	cin >> choice;
	switch (choice)
	{
		case easy :
			cout<<"You have chosen easy";
			break;
		case medium :
			cout<<"You have chosen medium";
			break;
		case hard :
			cout<<"You have chosen hard";
			break;
			default:cout<<"default";
	}
	getch();
}
