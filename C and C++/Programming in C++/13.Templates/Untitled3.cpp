#include<iostream>
using namespace std;
template<class T,class T2>
class abc{
	T a;
	T2 b;
	public:
		T my(T a,T2 b)
	{
	return (a<b)?a:b;
	}
		
};

int main()
{
	int x,y,z;
	cin>>x>>y;
	abc<int,int> k;
	z=k.my(x,y);
	cout<<z;
	return 0;
}
