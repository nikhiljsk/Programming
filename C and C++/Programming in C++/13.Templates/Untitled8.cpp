#include<iostream>
using namespace std;
template<class T>
class alpha{
	protected:
		T a;
};
template<class T>
class beta:public alpha<T>
{
	T b;
	public:
		void get()
		{
			cout<<"Enter a and b"<<endl;
			cin>>alpha<T>::a>>b;
		}
		void display()
		{
			cout<<alpha<T>::a<<ends<<b<<endl;
		}
};
int main()
{
	beta<int> b1;
	beta<float> b2;
	cout<<"Enter a and b for integer"<<endl;
	b1.get();
	cout<<"the values for a and b for integer are"<<endl;
	b1.display();
	cout<<"Enter the float value of a and b"<<endl;
	b2.get();
	cout<<"The values of a and b for float are"<<endl;
	b2.display();
	return 0;
	return 0;
	
}
