#include<iostream>
#include<conio.h>
using namespace std;
class trial
{
	public:
		int a;
		trial()
		{
			a=10;
		}
		trial(trial &t1)
		{
			cout<<t1.a<<endl;
			t1.a++;
		}
		void display()
		{
			cout<<"display"<<a<<endl;
		}
};
int main()
{
	trial t;
	t.display();
	trial t1(t);
	t.display();
	
}
