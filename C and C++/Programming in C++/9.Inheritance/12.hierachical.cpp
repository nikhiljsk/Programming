#include<iostream>
#include<conio.h>
using namespace std;
class num{
	protected:
		int a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
};
class sum:public virtual num{
	int sum;
	public:
		void display()
		
		{
			sum=a+b;
			cout<<sum;
		}
};
class dif:public virtual num{
	int diff;
	public:
		void display()
		{
			diff=a-b;
			cout<<diff;
		}
};
int main()
{
	sum n;
	dif n1;
	n.get();
	n.display();
	n1.display();
}
