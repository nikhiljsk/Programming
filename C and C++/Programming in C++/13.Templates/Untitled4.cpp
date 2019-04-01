#include<iostream>
using namespace std;
template<class T>
class abc
{
T a,b;
public:
	void swa(T a,T b)
	{
	T c;
	c=a;
	this->a=b;
	this->b=c;
	}
	void show()
	{
		cout<<a<<ends<<b<<endl;
	}
};
int main()
{
	int a,b;
	cin>>a>>b;
	abc<int> k;
	k.swa(a,b);
	k.show();
	abc<char> k1;
	char x,y;
	cin>>x>>y;
	k1.swa(x,y);
	k1.show();
	char p[10],q[10];
	abc<char*> k2;
	cin>>p>>q;
	k2.swa(p,q);
	k2.show();
	return 0;
}
