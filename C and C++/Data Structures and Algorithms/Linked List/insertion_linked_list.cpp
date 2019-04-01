#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *s,*l,*n,*p;
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
	cout<<"Enter the value you want to insert at 1st position"<<endl;
	cin>>num;
	//Starting of the list
	n=new node;
	n->data=num;
	n->next=s;
	s=n;
	//Ending of the list
	cout<<"Enter the last element"<<endl;
	cin>>num;
	n=new node;
	n->data=num;
	l->next = n;
	l=n;
	n->next=NULL;
	//For displaying the linked list
	p=s;
	cout<<"Resultant List"<<endl;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
	//Between a given linked list
	cout<<"Enter the number you want to insert"<<endl;
	cin>>num;
	cout<<"Enter the data number you want to insert the number after"<<endl;
	cin>>pos_data;
	p=s;
	while(p->data!=pos_data && p!=NULL)
	{
		p=p->next;
	}
	n = new node;
	n->data=num;
	n->next=p->next;
	p->next=n;
	cout<<"done"<<endl;
	p=s;
	cout<<"Resultant List"<<endl;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
	return 0;
}

