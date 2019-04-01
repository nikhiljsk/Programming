#include<iostream>
#include<conio.h>
using namespace std;
class abc{
	int x;
	public:
		void get()
		{
			cin>>x;
		}
		void show()
		{
			cout<<x;
		}
		int search()
		{
			return x;
		}
		void assign(int a)
		{
			x=a;
		}
};
int main()
{
	int n,i;
	cout<<"Enter the no of elements"<<endl;
	cin>>n;
	abc *s=new abc[n];
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		(s+i)->get();
	}
	for(i=0;i<n;i++)
	{
		(s+i)->show();
		cout<<endl;
	}
	int j,r,q;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			r=(s+i)->search();
			q=(s+j)->search();
			if(r>q)
			{
				(s+i)->assign(q);
				(s+j)->assign(r);
			}
			else 
			continue;
		}
	}
	cout<<"Sorted array is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<(s+i)->search()<<endl;
	}
	int z=1,v;
	cout<<"Enter the value"<<endl;
	cin>>v;
	for(i=0;i<n;i++)
	{
		r=(s+i)->search();
		if(r==v)
		{
			z=0;
			cout<<"Value found at "<<i+1;
		}
	}
	if(z==1)
	cout<<"Value not found"<<endl;
	getch();
	return 0;
}
