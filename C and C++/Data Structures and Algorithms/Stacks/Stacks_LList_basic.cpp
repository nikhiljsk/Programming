#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *next;
};
class stack{
	node *top,*temp;
	public:
		stack(){
			top=NULL;
		}
		void pop(){
			if(top==NULL)
			{cout<<"Underflow"<<endl;
			getch();
			}
 			else{
				temp=top;
				top=top->next;
				free(temp);
				getch();
			}
		}
		void insert(){
			node *n;
			int num;
			cout<<"Enter a number"<<endl;
			cin>>num;
			n=new node;
			n->data=num;
			n->next=NULL;
			if (top!=NULL)
				n->next=top;
			top=n;
			cout<<"Number inserted"<<endl;
			getch();
		}
		void display(){
			node *p;
			p=top;
			while(p!=NULL)
			{
				cout<<p->data<<endl;
				p=p->next;
			}
			getch();
		}
};
int main(){
	stack s;
	int choice;
	while(1==1)
	{
		system("CLS");
		cout<<"Enter a choice \n1.Insert\n2.Display\n3.Pop\n4.Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				s.insert();
				break;
			case 2:
				s.display();
				break;
			case 3:
				s.pop();
				break;
			case 4:
				exit(0);
			default:cout<<"Enter a valid option"<<endl;break;
		}
	}
	return 0;
}
