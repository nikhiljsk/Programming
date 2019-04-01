#include<iostream>
#include<conio.h>
using namespace std;
class university{
	protected:
	string name;
	public:
		void get()
		{
			cout<<"Enter the name of the university"<<endl;
			cin>>name;
		}
	
};
class dept:public university{
protected:
	int code;
	public:
		void getd()
		{
			cout<<"Enter the course code"<<endl;
			cin>>code;
		}
	
};
class teacher_details:public dept{
private:
	string tname;
	public:
		void getda()
		{
			cout<<"Enter the name "<<endl;
			cin>>tname;
		}
		void display()
		{
			cout<<name<<ends<<code<<ends<<tname;
		}
	
};
int main()
{
	teacher_details t;
	t.get();
	t.getd();
	t.getda();
	t.display();
	getch();
	return 0;
}
