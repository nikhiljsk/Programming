#include<iostream>
#include<conio.h>
using namespace std;
class item
{
	private: int number;//initial value is garbage
				static int count;//initial value=0
	public:
		void getdata(int a)
		{
			number=a;
			count++;
		}
		void getcount()
		{
			cout<<"count:";
			cout<<count<<endl;
			cout<<"number: ";
			cout<<number<<endl;
		}
};
int item::count;//definition since static data member
int main()
{
item a,b,c;
a.getdata(100);
b.getdata(50);
c.getdata(20);
a.getcount();
b.getcount();
c.getcount();
return 0;
getch();
}
