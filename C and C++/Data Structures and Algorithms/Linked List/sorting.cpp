#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *s,*l,*n,*p,*temp;
	s=NULL;
	int c=0;
	int num,pos_data;
	cout<<"Enter the data in linked list"<<endl;
	cin>>num;
	while(num!=-1){
		n=new node;
		n->data=num;
		n->next=NULL;
		c+=1;
		if(s==NULL){
			
			s=n;
			l=n;
		}
		else{
			l->next=n;
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
	
	temp=s;
	
	int t;
	while(temp!=NULL)
	{
		p=temp->next;
		while(p!=NULL)
		{
			if(temp->data > p->data)
			{
				t=p->data;
				p->data=temp->data;
				temp->data=t;
				p=p->next;
			}
			else
			{
				p=p->next;
			}
		}
		temp=temp->next;
	}
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	return 0;
}
