
#include<iostream>
#include<conio.h>
using namespace std;
class a{
	int x;
	public: a(const int m)//m cannot be changed in the following function
	{
		x=m;
	}
	void assign() const{
	//x=78;      //this cannot be done since const functions can only display the values and cannot assign or re-assing them.
	cout<<x<<endl;
	}
	void putdata(int z) //since this function is not constant and is related to an object which is constant error
	{
		x=z;
		cout<<z;
	}
};
int main()
{
	const a a1(7);//?????since the obj is constant the functions related to the object must be constant
	a1.assign();
//	a1.putdata(7);
	return 0;
	getch();
}
