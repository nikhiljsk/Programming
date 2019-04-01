#include<iostream>
#include<conio.h>
using namespace std;
class cel{
	float x;
	public:
		cel(float a)
		{
			x=a;
		}
		float get()
		{
			return x;
		}
};
class far{
	float y;
	public:
		far()
		{}
		far(cel d)
		{	float a;
			a=d.get();
			y=(a*1.8)+32;	//f=(5c/9)+32;	
		}
		void display()
		{
			cout<<y;
		}
		
};
int main()
{	float n;
	cin>>n;
	cel c(n);
	far f(c);
	f.display();	
}
