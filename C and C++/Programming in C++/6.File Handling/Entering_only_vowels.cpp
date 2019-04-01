#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ofstream f1;
	f1.open("bye.txt",ios::out);
	while(ch!='.')
	{
		ch=getche();
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		f1.put(ch);
		else
		continue;
	}
	f1.close();
	ifstream f2;
	f2.open("bye.txt");
	while(!f2.eof())
	{
		f2.get(ch);
		cout<<ch;
	}
	f2.close();
	return 0;
	getch();
}
