#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class con
{
	float i;
	int f;
	public:
		con(int a)
		{
			f=a/30.28;
			i=fmod(a,30.28);
			//cout<<f<<ends<<i;
		}
		operator int()
		{
		return f;
		}
		operator float()
		{
			return i;
		}
};
int main()
{
	con a(32);
	int x;
	float y;
	x=a;
	y=a;
	cout<<"Feet"<<ends<<x<<endl<<"Inches"<<ends<<y<<endl;
	return 0;
	getch();
}
