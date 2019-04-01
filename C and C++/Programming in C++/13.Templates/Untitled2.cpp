#include<iostream>
using namespace std;
template<class n>
class abc{
//	n x;
	public:
		void display(n x);
};
template<class n>
void abc<n>::display(n x)
{
	cout<<x<<endl;
}
int main()
{
	int a=10;
	float b=2.1;
	char c='g';
	char d[10]="hello";
	abc<int> z;
	z.display(a);
	abc<float> z1;
	z1.display(b);
	abc<char> z2;
	z2.display(c);
	abc<char*> z3;			//char* is used to define a string type
	z3.display(d);
	
}
