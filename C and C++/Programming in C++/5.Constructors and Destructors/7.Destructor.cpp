#include<iostream>
using namespace std;
class book
{
	static int count;
	public:
		book();
		~book();
		
};
int  book::count;
book::book()
{
	cout<<"constructor is called"<<endl;
}
book::~book()
{
	cout<<"destructor is called"<<endl;
	count--;
	cout<<"count is "<<count<<endl;
}
int main()
{
	{
		book b1,b2;
		{
			book b3;
		}
		{
			book b4;
		}
	}
}
