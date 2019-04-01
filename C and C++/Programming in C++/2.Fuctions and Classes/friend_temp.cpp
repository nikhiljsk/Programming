#include<iostream>
#include<conio.h>
using namespace std;
class x
{
private:
		int h,t;
public:

void get();
friend void dis(x);
}y;
void x::get()
{
	cout<<"Enter humidity and temp"<<endl;
	cin>>h>>t;
}
void dis(x z)
{
	cout<<"Entered humidity and temp:"<<z.h<<ends<<z.t<<endl;
	if(z.h<30)
	{
		cout<<"Error in humidity"<<endl;
	}
}
int main()
{
	y.get();
	dis(y);
	return 0;
	getch();
}
