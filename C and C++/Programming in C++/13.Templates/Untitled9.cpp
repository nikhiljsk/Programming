#include<iostream>
using namespace std;
template<class T>
class abc{
		T sumf;
	public:
		abc()
		{
			sumf=0;
		}
		void sum(T ar[])
		{
		int i;
		for(i=0;i<=4;i++)
		{
			sumf=sumf+ar[i];
		}
		cout<<sumf<<endl;
		}
};
int main()
{
	int a[]={1,2,3,4};
	float b[]={2.1,2.2,2.3,2.4};
	abc<int> k1;
	k1.sum(a);
	abc<float> k;
	k.sum(b);
	return 0;
}
