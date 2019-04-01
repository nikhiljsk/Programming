//given first string ace
//second string bdf
//output is abcdef i.e inserting strings

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class abc
{
	char s[6],q[11];
	public:
		void get()
		{
			cin>>s;
		}
		void operator+(abc b1)
		{
			int i,n,j;
			n=strlen(s);
			for(i=0,j=0;j<n;i=i+2,j++)
			{
				q[i]=s[j];
				q[i+1]=b1.s[j];	
			}
		}
		void display()
		{
		cout<<endl<<q;	
		}
};
int main()
{
	abc a,b;
	a.get();
	b.get();
	a.operator+(b);
	a.display();
	return 0;
	getch(); 	
}
