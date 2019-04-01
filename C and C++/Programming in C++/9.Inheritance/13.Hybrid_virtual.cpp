#include<iostream>
#include<conio.h>
using namespace std;
class student{
	protected:int rollno;
	public:
		void getroll()
		{
			cout<<"Enter the roll no."<<endl;
			cin>>rollno;
		}
		void putroll()
		{
			cout<<rollno;
		}
};
class test:public virtual student {
	protected: int mark1,mark2;
	public:
		void getmarks()
		{
			cout<<"Enter the two marks"<<endl;
			cin>>mark1>>mark2;
		}
		void putmarks()
		{
			cout<<"marks are "<<mark1<<ends<<mark2;
		}
		
};
class sports:virtual public student
{
	protected:
		int part;
		public:
			void getpart()
			{
				cout<<"Enter part"<<endl;
				cin>>part;
			}
			void putpart()
			{cout<<part<<endl;
			}
};
class result:public test,public sports{
	int total;
	public:
		void sum()
		{
			total=mark1+mark2+part;
			cout<<"Roll no is "<<rollno<<endl;
			cout<<"mark1 is "<<mark1<<endl;
			cout<<"marks2 is"<<mark2<<endl;
			cout<<"part is "<<part<<endl;
			cout<<"total is "<<total<<endl;
		}
};
int main()
{
	result r1;
	r1.getroll();
	r1.getmarks();
	r1.getpart();
	r1.sum();
	return 0;
	getch();
}
