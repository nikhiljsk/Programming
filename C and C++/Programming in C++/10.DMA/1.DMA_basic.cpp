#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	//int *ptr=new int (10);//to assign the value of 10
//when is null displayed?
	int *ptr=new int [3];//to assign the size of 3 int variables
	for(int i=0;i<3;i++)
		cin>>*ptr[i];//since cin directly takes the value and not the address
	for(int i=0;i<3;i++)
		cout<<*(ptr+i)<<endl;
	cout<<ptr<<endl;
	delete ptr;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	return 0;
	getch();
}
