#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream f1;
	f1.open("hello.txt");
	char ch;	
	while(ch!='.')
	{
		ch=getche();
		f1.put(ch);
	}
	f1.close();
	ifstream f2;
	f2.open("hello.txt");
	while(!f2.eof())//while(f2)
					//if(f2.eof()!=0)
	{
		f2.get(ch);//	cout<<f2.get(ch); cannot be used
		cout<<ch;
	}
	f2.close();
}
