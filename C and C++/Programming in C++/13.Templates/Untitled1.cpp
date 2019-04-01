#include<iostream>
using namespace std;
#include<conio.h>
template<class T>
class sample
{
	private:
		T value1,value2;
		public:
			void getdata()
			{
				cin>>value1>>value2;
			}
			void sum()
			{
				T value;
				value=value1+value2;
				cout<<value;
			}
};

int main()
{
	sample<int>s1;
	s1.getdata();
	s1.sum();
	sample<float>s2;
	s2.getdata();
	s2.sum();
		return 0;
}

