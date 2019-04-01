#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *s,*l,*n,*p,*temp=s,*tr,*last;
	s=NULL;
	int num,pos_data;
	cout<<"Enter the data in linked list"<<endl;
	cin>>num;
	while(num!=-1){
		n=new node;
		n->data=num;
		n->next=NULL;
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
	last=l;
	p=s;
	while(p!=last)
	{
		if(p->data%2!=0)
		{
			tr=p;
			temp->next=tr->next;
			l->next=tr;
			l=tr;
			tr->next=NULL;
			p=temp->next;
		}
		else
		{
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
}
