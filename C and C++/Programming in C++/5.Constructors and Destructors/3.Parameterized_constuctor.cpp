/*
Type of constuctor
--Default
--Parameterized
--Copy
--Dyanamic

*/
#include<iostream>
using namespace std;
class A {
	int a,b;
	public:
		A(int x,int y)//parameterized const. cannot be called automatically and should be specified with parameters
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<endl<<b;
		}
};
int main()
{
	A a1(10,20);
	a1.show();
}
