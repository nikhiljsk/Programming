#include<iostream>
#include<conio.h>
using namespace std;
class con{
	int c;
	public:
		con(int a,int b)
		{
			c=a*100+b;
		}
		operator int()
		{
			return c;
		}
};
int main()
{
	con z(1,10);
	int b=z;
	cout<<b;
	return 0;
	getch();
}
