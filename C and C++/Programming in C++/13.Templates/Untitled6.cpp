#include<iostream>
using namespace std;
template<class T1,class T2>
class sample
{
	T1 x;
	T2 y;
	public:
		sample(T1 a,T2 b)
		{
			x=a;
			y=b;
		}
		void putdata()
		{
			cout<<x<<ends<<y<<endl;
		}
};
int main()
{
	sample<int,int>s1(10,20);
	sample<int,float>s2(10,2.30);
	sample<char,int>s3('x',20);
	s1.putdata();
	s2.putdata();
	s3.putdata();
	return 0;
}
