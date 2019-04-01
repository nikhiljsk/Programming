#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
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
		{ f=n;
		  l=n;
		}
		else{
			l->next = n;
			l=n;
		}
		cin>>num;
	}
	
	p=f;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
	node *q,*r;
	r=f;
	q=f;
	while(r!=NULL && r->next!=NULL){
		r=r->next->next;
		q=q->next;
	}
	cout<<"Middle"<<q->data<<endl;  //add code when even number of nodes are given 
	
	cout<<"Deleting"<<endl;
	p=f;
	temp=f;
	int c=0;
	while(p!=NULL)
	{
		if(c%2!=0)
		{
			temp->next = p->next;
		}
		temp = p;
		p = p->next;
		c++;
	}
	
	p=f;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	return 0;
}
