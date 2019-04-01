#include<iostream>
#include<conio.h>
using namespace std;
class human{
	public:
		int age;
		char name[10];int cse202;
		void getdata()
		{
			cin>>age>>name>>cse202;
		}
	};
	class student:public human{
		public:
		char course[10];
		char section;
		int total;
		int maths;
		void get()
		{
			cin>>course>>section>>maths;
		}
		void mcal()
		{
			total=maths+cse202;
		}
		void display()
		{
			cout<<age<<ends<<name<<ends<<cse202<<ends<<course<<ends<<section<<ends<<maths<<ends<<total;
		}
	};
	int main()
	{
		student s;
		s.getdata();
		s.get();
		s.mcal();
		s.display();
	}
