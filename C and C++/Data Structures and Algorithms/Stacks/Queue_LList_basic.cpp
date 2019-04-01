#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *next;
};
class queue{
	node *rear,*front;
	public:
		queue(){
			rear=NULL;
			front=NULL;
		}
		void insert(){
			node *n;
			cout<<"Enter a number"<<endl;
			int num;
			cin>>num;
			n=new node;
			n->data=num;
			n->next=NULL;
			if (front==NULL)
			{
				front=rear=n;
				rear->next=NULL;
			}
			else{
				rear->next=n;
				n->next=NULL;
				rear=n;
			}
		}
		void delete1(){
			if(front==NULL)
			{
				cout<<"Underflow"<<endl;
			}
			else{
				front=front->next;
			}
		}
		void display(){
			node *p;
			p=front;
			while(p!=NULL)
			{
				cout<<p->data<<endl;
				p=p->next;
			}
			getch();
		}
};
int main()
{
	queue s;
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
				s.delete1();
				break;
			case 4:
				exit(0);
			default:cout<<"Enter a valid option"<<endl;break;
		}
	}
	return 0;
}
