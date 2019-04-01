#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *s,*l,*n,*p;
	s=NULL;
	int num;
	cout<<"Enter the data in linked list \nPress -1 to terminate the process"<<endl;
	cin>>num;
	while(num != -1)
	{
		n = new node;
		n->data = num;
		n->next = NULL;	
		if(s==NULL)
		{
			s = n;
			l = n;
		}
		else{
			l->next = n;
			l = n;
		}
		cin>>num;
	}
	l->next=s;
	p=s;
	while(p->next!=s){
		cout<<p->data<<endl;
		p = p->next;
	}
	cout<<p->data<<endl;
	return 0;
}
