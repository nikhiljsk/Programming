#include<iostream>
using namespace std;
struct node{
	int data;
	node *next,*prev;
};
node *p;
int main()
{
	node *n,*s=NULL,*l,*temp;
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
	
	//Deleting alternative nodes
	
	int c=0;
	p=s;
	temp=s;
	while(p!=NULL)
	{
		if(c%2!=0)
		{
			temp->next = p->next;
			p->prev = temp;
		}
		else{
			temp=p;
			if(p!=NULL)
			p=p->next;
		}
		c++;	
	}
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
}
