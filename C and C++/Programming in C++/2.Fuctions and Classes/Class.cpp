#include<iostream>
#include<conio.h>
using namespace std;
class book
{
	private:
		char name[20];//members cannot be initialized here since assigning space is not a part of the class a constuctor is used to do the same
		int pages;
		float price;
		public:
			void getdata()//members functions and class name should not match since constructor and class have same name
			{
				cout<<"Enter the name of book";
				cin>>name;
				cout<<"Enter the no of pages";
				cin>>pages;
				cout<<"Enter price";
				cin>>price;
				
			}
			void display()
			{
				cout<<"Name of book is "<<name<<endl;
				cout<<"No of pages= "<<pages<<endl;
				cout<<"price="<<price<<endl;
				
			}
};
int main()
{
	book b;
	b.getdata();
	b.display();
	getch();
}
