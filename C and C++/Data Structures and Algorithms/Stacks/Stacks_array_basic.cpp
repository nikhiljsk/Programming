#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int insert(int arr[],int top){
	int n;
	cout<<"Enter an element"<<endl;
	cin>>n;
	if(top==6)
	{
	cout<<"Overflow"<<endl;
	return 0;
	}
	else{
	top+=1;
	arr[top]=n;
	return top;
	}
}
void display(int arr[],int top)
{
	int i;
	cout<<endl<<endl<<"Elements in the stack are :"<<endl;
	for(i=0;i<=top;i++)
	cout<<arr[i];
	cout<<endl<<endl<<endl;
	getch();
}
int pop(int arr[],int top)
{
	if(top==-1)
	{
	cout<<"Underflow"<<endl;
	getch();
	return top;
	}
	else{
		cout<<"Deletion Succesfull"<<endl;
		top=top-1;
		getch();
		return top;
	}
}
void exit1()
{exit(0);}

int main()
{
	char c;
	int choice;
	int arr[6],top=-1;
	while(1>0){
	system("CLS");
	cout<<"Enter a choice \n1.Insert\n2.Display\n3.Pop\n4.Exit"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			top=insert(arr,top);
			break;
		case 2:
			display(arr,top);
			break;
		case 3:
			top=pop(arr,top);
			break;
		case 4:
			exit1();
		default:cout<<"Enter right option"<<endl;
	}
	}
}
