#include<iostream>
#include<conio.h>
using namespace std;
class tim{
	int h,m,s;
	public:
		tim(int a)
		{int c;
		h=a/3600;
		c=a%3600;
		m=c/60;
		s=c%60;
		cout<<h<<ends<<m<<ends<<s;	
		}
};
int main()
{
	tim t1(3701);
	return 0;
	getch();
	
}
