#include<iostream>
#include<conio.h>
using namespace std;
class arithmetic{
	protected:
		int num1,num2;
		public:
			void getdata()
			{
				cout<<"Enter 2 no's"<<endl;
				cin>>num1>>num2;
			}
			
};
class pls:public arithmetic
{
	protected:
		int sum;
		public:
			void add()
			{
				sum=num1+num2;
			}
};
class mins{
	protected: int n1,n2,diff;
	public:
		void sub()
		{
			cout<<"Enter 2 no's"<<endl;
			cin>>n1>>n2;
			diff=n1-n2;
		}
};
class result:public pls,public mins
{
	public:void display()
	{
		cout<<"Sum is "<<sum<<endl<<"Diff is "<<diff<<endl;
	}
};
int  main()
{
	result z;
//	pls p;
//	p.getdata();    //this cannot be done since values are stored in p object and in z.display some random values are displayed
	z.getdata();
	z.add();
	z.sub();
	z.display();
	return 0;
	getch();
}
