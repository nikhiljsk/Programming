#include<iostream>
#include<conio.h>
using namespace std;
class wallet{
	string material,color;
	public:
		void get()
		{
			cout<<"Enter the material and color of the wallet"<<endl;
			cin>>material>>color;
		}
		void display(){
			cout<<"material : "<<material<<endl<<"color : "<<color<<endl;
		}
		class money{
			int amount;
			public:
				void get(){
					cout<<"Enter the amount"<<endl;
					cin>>amount;
				}
				void display()
				{
					cout<<"amount : "<<amount<<endl;
				}
		}m;
}w;
int main()
{
	w.get();
	w.m.get();
	w.display();
	w.m.display();
	return 0;
	getch();
}
