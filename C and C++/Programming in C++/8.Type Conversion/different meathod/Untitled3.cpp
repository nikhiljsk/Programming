#include<iostream>
using namespace std;
class abc{
	int feet,inches;
	public:
		abc(int a)
		{
			feet=a;
		}
		void get()
		{
			cin>>inches;
		}
		int cal()
		{
			inches=(feet*12)+inches;
			return inches;
		}
};
int main()
{
	int n,z;
	cin>>n;
	abc s=n;
	s.get();
	z=s.cal();
	cout<<z<<endl;
	return 0;
}

