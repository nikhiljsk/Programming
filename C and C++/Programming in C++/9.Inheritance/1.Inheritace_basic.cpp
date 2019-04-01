//single inheritance
#include<iostream>
using namespace std;
class square {
	protected://only accessible in derived class and cannot be accessed in main or other functions
		float side;
		public:
			square()
			{
				cout<<"Base class constructor called "<<endl;
				side=0.0;
				//cout<<"Enter the side of the sqaure"<<endl;
				cin>>side;
			}
};
class area:public square//syntax for derived class //protected square can also be used
{
	public:
		area()
		{
			cout<<"Derived class constructor is called"<<endl;
			float a;
			a=side*side;
			cout<<"Area is : "<<a<<endl;
		}
};
int main()
{
	cout<<"Enter the side for the first square"<<endl;
	area a;
	//cout<<"Area for first square"<<a.calc()<<endl;
	return 0;
}
