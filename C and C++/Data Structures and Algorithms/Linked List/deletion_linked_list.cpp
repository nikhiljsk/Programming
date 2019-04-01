#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};

int main()
{
	node *n,*s=NULL,*l,*p;
	int i,num,pos_value;
	cout<<"Enter the numbers in the linked list and end with -1"<<endl;
	cin>>num;
	while(num!=-1){
		n=new node;
		n->data=num;
		n->next=NULL;
		if(s==NULL)
		{ 
		  s=n;
		  l=n;
		}
		else{
			l->next=n;
			l=n	;
		}
		cin>>num;
	}
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
	
	cout<<"Deleting the first element"<<endl;
	
	s=s->next;
	
	p=s;
	while(p!=NULL)
	{cout<<p->data<<endl;
	p=p->next;
	}
	
	
	cout<<"Deleting the last element"<<endl;
	p=s;
	node *temp=s;
	while(p!=NULL){
		//cout<<"h";
		if(p==l)
		{
			temp->next=p->next;
			l=temp;
			break;
		}
		else{
		temp=p;
		p=p->next;
		}
	}
	
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	//Deleting in the given node postion
	
	cout<<"enter the node value you want to delete"<<endl;
	cin>>pos_value;
	p=s;
	while(p->data!=pos_value && p!=NULL)
	{
		temp=p;
		p=p->next;
	}
	if(p==NULL)
	cout<<"Value not found"<<endl;
	
	else{
		temp->next=p->next;
	}
	
	p=s;
	cout<<"Displaying elements"<<endl;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
