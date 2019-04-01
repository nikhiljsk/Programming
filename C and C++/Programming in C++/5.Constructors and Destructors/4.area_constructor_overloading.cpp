//WAP to cal area of circle and square using constuctor overloading 
#include<iostream>
using namespace std;
class area
{
	int r,s;
	public:
		area()
		{
			cout<<"Enter the value of r"<<endl;
			cin>>r;
			cout<<"area is "<<3.14*r*r<<endl;
		}
		area(int x)
		{
			s=x;
			cout<<"area of square is "<<s*s<<endl;
		}
};
int main()
{
	area a;
	area a1(3);
}
