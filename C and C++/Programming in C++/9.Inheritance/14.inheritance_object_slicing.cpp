//object slicing 
#include<iostream>
#include<conio.h>
using namespace std;
class a 
{
	protected:
		int i,j;
		public: void display()
		{
			cout<<i<<ends<<j;
			//cout<<i<<ends<<j<<ends<<k;//k is some random value because the members of the derived class cannot be accessed by the base class
		}
};
class b:public a
{
	protected:int k;
	public:
		void getdata()
		{
			i=1;j=8;k=7;
		}
		void display()
		{
			cout<<i<<ends<<j<<ends<<k<<endl;
		}
};
int main()
{
	b b1;
	a a1;
	b1.getdata();
	a1=b1; //object slicing 
	a1.display();
	cout<<endl;
	b1.display();
	return 0;
	getch();
}
