#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	char name[10],n[10];
	int roll,r;//usage of different data types can lead to errors
	ofstream f1("abc.txt");
	cout<<"enter name and roll"<<endl;
	cin>>name>>roll;//display to RAM
	f1<<name<<roll;//RAM to file
	f1.close();
	ifstream f2("abc.txt");
	f2>>n>>r;//File to RAM
	cout<<n<<endl<<r<<endl;//RAM to display
	return 0;
	getch();
}
