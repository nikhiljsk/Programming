#include<iostream>
#include<conio.h>
using namespace std;
class trial
{
	
	
	public:
		int a;
		void get(int a1)
		{
			a=a1;
		}
		friend void disp(trial t);
};
void disp(trial t)//friend function uses call by value
		{
			//cout<<z;
			cout<<t.a;
			++t.a;
		}
int main()
{
	trial t;
	t.get(4);
	disp(t);
	//cout<<t[0].a;
}
