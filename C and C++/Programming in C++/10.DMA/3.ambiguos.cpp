#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *a,*b;
	a=new int (5);
	b= new int (6);
	cout<<*a<<ends<<*b<<endl;
	//reverse the order of deletion and compile
	delete b;	//the order must be same as the destructor
	delete a;	//the memory of b is not deallocated it still remains the same.
	
	cout<<*a<<ends<<*b;
	
}
