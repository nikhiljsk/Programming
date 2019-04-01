#include<iostream>
#include<conio.h>
using namespace std;
class aa{
	int x;
	public:
		void get(int a){
			x=a;
		}
		void operator+(aa &b1) //aa b1 can also be used
		{
			x=x+b1.x;
		}
		void display()
		{
			cout<<endl<<x;
		}
		
		
};
int main(){
	aa a,b;
	a.get(10);
	b.get(1);
	a.operator+(b);//a+b;
	a.display();
	getch();
	return 0;
}
