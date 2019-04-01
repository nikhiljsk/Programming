#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"Class A ";
		}
};
class B
{
	public:
		void show()
		{
			cout<<"Class B"<<endl;
		}
	
};
class C:public A,public B
{
	
};
int main(){
	C obj;
	obj.show(); //Ambiguous function (show) call  //if there is a show function in c then it would be called without ambiguity based on function overriding
	//obj.B::show();//no ambiquity
}
