#include<iostream>
using namespace std;
template<class T>
class sample{
	T a;
	public:
		void sum(int n)
		{
			int i;
			T s=0;
			for(i=0;i<n;i++)
			{
				cin>>a;
				s=s+a;
			}
			cout<<s;
		}
};
int main()
{
	sample<int> s1;
	s1.sum(5);
	sample<float> s2;
	s2.sum(4);
	return 0;
}
