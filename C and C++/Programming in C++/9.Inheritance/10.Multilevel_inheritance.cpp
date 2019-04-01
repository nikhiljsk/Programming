//Multilevel inheritance
#include<iostream>
using namespace std;
class student
{
	protected:
		int roll;
		public:
		void get_no(int a)
		{
			roll=a;
		}
		void put_no()
		{
			cout<<"Roll number is"<<roll;
		}
};
class test:public student 
{
	protected:
		float sub1,sub2;
		public:
			void get_marks(float x,float y)
			{
				sub1=x;
				sub2=y;
			}
			void put_marks()
			{
				cout<<"Marks in sub1"<<sub1<<endl;
				cout<<"Marks in sub2"<<sub2<<endl;
			}
};
class result:public test 
{
	float total;
	public:
		void display();
};
void result::display()
{
total=sub1+sub2;
put_no();
put_marks();
cout<<"Total="<<total;	
}
int main()
{
	result student1;
	student1.get_no(102);
	student1.get_marks(80.0,98.5);
	student1.display();
	return 0;
}
