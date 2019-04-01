#include<iostream>
using namespace std;
template<class T>
class sample
{
	T value1,value2;
	public:
		void getdata();
		void sum();
};
template<class T>
void sample<T>::getdata()
{
	cin>>value1>>value2;
}
template<class T>
void sample<T>::sum(){
	T value;
	value=value1+value2;
	cout<<value<<endl;
}
int main()
{
	sample<int >s1;
	s1.getdata();
	s1.sum();
	sample<float>s2;
	s2.getdata();
	s2.sum();
		return 0;
}
