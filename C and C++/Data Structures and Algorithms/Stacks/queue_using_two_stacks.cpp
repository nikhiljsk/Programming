#include<iostream>
#include<conio.h>
using namespace std;
int stack1[10],top1=-1;
int stack2[10],top2=-1;
void push();
int pop();
void print();
int main(){
	x:
	int choice,a;
	cout<<"\n1. Press one for PUSH OPERATION\n";
	cout<<"2. Press two for POP OPERATION\n";
	cout<<"3. Press three for PRINT OPERATION\n";
	cout<<"4. Press four for EXIT\n";
	cout<<"Enter the option of your choice: ";
	cin>>choice;
	switch(choice){
		
		case 1:
			push();
		case 2:
			a=pop();
			cout<<"The element deleted is: "<<a;
			goto x;
		case 3:
			print();
		case 4:
			break;
			
	}
}

void push(){
	if (top1==9){
		cout<<"Overflow condition";
	}
	else{
		int num,i;
		cout<<"Enter the number you want to push: ";
		cin>>num;
		top1=top1+1;
		stack1[top1]=num;
		for (i=top1;i>=0;i--){
			cout<<stack1[i];
		}
	}

	main();	
}
int pop(){
	int i,j,x;
	for(i=top1,j=0;i>=0,j<=top1;i--,j++){
		top2=j;
		stack2[top2]=stack1[i];
	}
	x=stack2[top2];
	top2=top2-1;
	return x;
}
void print(){
	int i;
	for(i=top2;i>=0;i--){
		cout<<stack2[i];
	}
	main();
}
