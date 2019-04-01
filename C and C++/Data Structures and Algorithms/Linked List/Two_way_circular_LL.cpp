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
		else
		{
			l->next=n;
			n->prev=l;
			l=n;
		}
		cin>>num;
	}
	l->next=s;
	s->prev=l;
	p=l;
	while(p->prev!=l)
	{
		cout<<p->data<<endl;
		p=p->prev;
	}
	cout<<p->data<<endl;
	cout<<"s"<<endl;
	p=s;
	while(p->next!=s)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	cout<<p->data<<endl;
	
	
}
