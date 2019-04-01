#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"A"<<endl;
		}
		
};
class B:public A
{
	public:
	void display()
	{
		cout<<"B"<<endl;
	}
};
int main(){
	B b;
	b.display(); //A display is overridden by B display
	return 0;
}
