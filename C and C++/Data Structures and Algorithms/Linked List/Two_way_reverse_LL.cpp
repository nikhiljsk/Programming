#include<iostream>
using namespace std;
struct node{
	int data;
	node *next,*prev;
};
node *p;
int main()
{
	node *n,*s=NULL,*l;
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	while(num!=-1)
	{
		n=new node;
		n->data=num;
		n->next=NULL;
		if(s==NULL)
		{
			n->prev=NULL;
			s=n;
			l=n;			
		}
		else{
			//p=s;
			//while(p->next!=NULL)
			//	p=p->next;
			l->next=n;
			n->prev=l;
			l=n;
		}
		cin>>num;
	}
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
	
}
