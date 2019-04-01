#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main()
{
	node *s=NULL,*l,*p,*temp,*n;
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	while(num!=-1)
	{
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
	return 0;
}
