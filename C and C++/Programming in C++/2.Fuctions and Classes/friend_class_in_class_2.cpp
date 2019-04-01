#include<iostream>
#include<conio.h>
using namespace std;
class bb;
class aa
{
	int p;
	public:
		void get()
		{
			cout<<"Enter"<<endl;
			cin>>p;
		}
		
		friend class bb;
}a;
class bb
{
	int q=10;
	public:
		void disp(aa a)
		{
			cout<<a.p<<endl;
		}
}b;
int main()
{
	a.get();
	b.disp(a);
}
