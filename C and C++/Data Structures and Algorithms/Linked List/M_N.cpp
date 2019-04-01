#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *s,*l,*n,*p,*temp;
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
	int t,m,k,c=0;
	cout<<"enter m and n"<<endl;
	cin>>m>>k;
	t=k;
	p=s;
	while(p!=NULL)
	{
		if(c==m)
		{
			while(k>0 && p!=NULL)
			{
				temp->next=p->next;
				p=temp->next;
				k--;
			}
			c=0;
			k=t;
		}
		temp=p;
		if(p!=NULL)
		p=p->next;
		c++;
	}
	p=s;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	return  0;
}
	
