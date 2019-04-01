#include<iostream>
#include<conio.h>
using namespace std;
class aa{
	int *age;
	char *name;
	public:
		void get()
	{
		cout<<"name : ";
		name=new char[10];
		cin>>name;
		cout<<"age : ";
		age=new int[2];
		cin>>*age;
	}
	void show()
	{
		cout<<name<<endl<<*age<<endl;
	}
};
int main()
{
 aa *a;
 int n,i;
 cout<<"Enter the no. of entries"<<endl;
 cin>>n;
 a=new aa [n];
 	 for(i=0;i<n;i++)
		{
			a[i].get();
			a[i].show();
		}
		delete []a;
}
