//WAP to cal sum of two numbers.Use constuctors to initialize the data members
#include<iostream>
using namespace std;
class sum {
	int a,b;
	public:
		sum()
		{
			a=10;b=20;
			cout<<a+b;
		}
		void sum1()
		{
			cout<<a+b;
		}
};
int main()
{
	sum s;
//	s.sum1();
}
