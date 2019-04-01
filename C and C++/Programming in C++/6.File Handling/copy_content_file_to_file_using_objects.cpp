#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{	char ch;
	ifstream f1("hello.txt");
	ofstream f2("bye.txt");
	while(!f1.eof())//f1.get(ch);
					//f2.put(ch);
	{
		f1>>ch;
		f2<<ch;
	}
	f1.close();
	f2.close();
}
