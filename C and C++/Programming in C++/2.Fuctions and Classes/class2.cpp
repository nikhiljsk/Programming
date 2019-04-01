#include<iostream>
#include<conio.h>
using namespace std;
class product
{
	private:
		char name[20];
		int q;
		float price;
	public:
		void getdata();
		void display();
}p;
void product::getdata()
{
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter quantity"<<endl;
	cin>>q;
	cout<<"Enter price "<<endl;
	cin>>price;
}
void product::display()
{
	cout<<"Entered name is "<<name;
	cout<<"Entered quant is "<<q;
	cout<<"Entered price is "<<price;
}
int main()
{
	p.getdata();
	p.display();
	return 0;
	getch();
}
