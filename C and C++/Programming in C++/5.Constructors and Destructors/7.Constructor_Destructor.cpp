#include<iostream>
using namespace std;
class counter
{
	int id;
	public:
		counter(int i)
	{
		id=i;
		cout<<"counter withid"<<id<<"run"<<endl;
	}
	~counter()
	{
		cout<<"object with id "<<id<<"is destroyed"<<endl;
	}
};
int main()
{
	{
		
		counter c1(1);
		counter c2(2);
		//counter c3(3);
		
	}
	{
		counter c3(3);
	}
	return 0;
}
