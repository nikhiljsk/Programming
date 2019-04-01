#include<iostream>
#include<conio.h>
using namespace std;
class student{
	string a;
	public:
		void getdat(){
			cout<<"Enter the name"<<endl;
			cin>>a;
		}
		void display()
		{
			cout<<"name : "<<a<<endl;
		}
};
class mobile{
	string b;
	student a1;
	public:
		void getdata(){
			a1.getdat();
			cout<<"Enter the name"<<endl;
			cin>>b;
			  
		}
		void display()
		{
			a1.display();
			cout<<"mobile name: "<<b<<endl;
		}
};
int main(){
mobile m;
m.getdata();
m.display();
return 0;
getch();	
}
