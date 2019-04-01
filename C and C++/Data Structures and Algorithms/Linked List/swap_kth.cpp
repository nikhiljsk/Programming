#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *s,*l,*n,*p,*temp;
	s=NULL;
	int count=0;
	int num,pos_data;
	cout<<"Enter the data in linked list"<<endl;
	cin>>num;
	while(num!=-1){
		n=new node;
		n->data=num;
		n->next=NULL;
		count+=1;
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
	//problem starts here
	int k;
	cout<<"count"<<count;
	cout<<endl<<"enter k"<<endl;
	cin>>k;
	p=s;
	int c=0;
	int p1=k,p2=count-k+1;
	int temp1,temp2;
	while(p!=NULL)
	{
		c++;
		if(c==p1)
		{
			temp1=p->data;
		}
		else if(c==p2)
		{
			temp2=p->data;
			break;
		}
		p=p->next;
	}
	p=s;c=0;
	while(p!=NULL)
	{
		c++;
		if(c==p1)
		p->data=temp2;
		else if(c==p2)
		p->data=temp1;
		p=p->next;
	}
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
