#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	int a;
	public:
		stu()
		{
			cout<<"stu"<<endl;
		}
};
class clas{
	public:
		clas()
		{
			cout<<"clas"<<endl;
		}
};
class vir:public stu,virtual clas{   //hightest preference to virtual class
	public:
		vir()
		{
			cout<<"vir"<<endl;
		}
};
int main()
{
	vir v;
	getch();
	return 0;
}
