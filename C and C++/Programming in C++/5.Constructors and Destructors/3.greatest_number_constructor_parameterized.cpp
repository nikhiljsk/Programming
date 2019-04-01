//WAP to cal greatest b/w two numbers. Use parameterized constructors for the values
#include<iostream>
using namespace std;
class great
{
	int a,b;
	public:
		great(int x,int y)
		{
			a=x;b=y;
		}
		void gr()
		{
			if(a>b)
			cout<<"a is greater"<<endl;
			else 
			cout<<"b is greater"<<endl;
		}
};
int main()
{
	great g(10,20);
	g.gr();
}
