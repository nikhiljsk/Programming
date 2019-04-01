#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b)
{
	return a+b;
}
int main()
{
	int a=5,c=6;
	float b=7,d=6.2;
	cout<<sum(a,c)<<endl;
	cout<<sum(b,d);
}

