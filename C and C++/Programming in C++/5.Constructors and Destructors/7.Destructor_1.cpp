#include<iostream>
#include<conio.h>
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
	
		
		counter c1(1);
		counter c2(2);
		getch();
		return 0;
}
