#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
	int a;
	float b;
	public:
		abc(int a1,float b1)
		{
		a=a1;
		b=b1;
		}
		operator int()
		{
			return a;
		}
		operator float()
		{
			return b;
		}
		void show()
		{
			cout<<a<<ends<<b;
		}
		
};
int main()
{
	int aa;
	float bb;
	abc a(5,6.22);
	aa=a;//invoking statement of operator int since automatically called according to the datatype.
	cout<<"aa="<<aa<<endl;
	bb=a;
	cout<<"bb="<<bb;
	return 0;
	getch();
}
