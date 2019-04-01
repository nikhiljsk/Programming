#include<iostream>
#include<string.h>
using namespace std;
class str{
	char a[20];
	public:
		void get()
		{
			cin>>a;
		}
		void operator--()
		{
			if(a[0]<=90 && a[0]>=65)
			{
				a[0]=a[0]+32;
			}
			else
			{
				a[0]=a[0]-32;
			}
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	str s;
	s.get();
	--s;
	s.show();
	return 0;
}
