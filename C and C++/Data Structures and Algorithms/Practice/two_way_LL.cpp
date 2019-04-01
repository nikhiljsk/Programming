#include<iostream>
using namespace std;
struct node{
	int data;
	node *next,*prev;
};

int main(){
	node *n, *p, *f = NULL, *l, *temp;
	int num,i,j;
	cout<<"Enter a number"<<endl;
	cin>>num;
	while(num!=-1){
		n = new node;
		n->data = num;
		n->next = NULL;
		if(f==NULL)
		{ 
		  n->prev = NULL;
		  f=n;
		  l=n;
		}
		else{
			n->prev=l;
			l->next = n;
			l=n;
		}
		cin>>num;
	}
	
	p=l;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->prev;
	}
	
	cout<<"Enter the number you want to delete"<<endl;
	cin>>num;
	p=f;
	temp=f;
	while(p!=NULL)
	{
		if (p->data==num)
		{
			temp->next = p->next;
		}
		temp=p;
		p=p->next;
	}
	
	p=f;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	return 0;
}
