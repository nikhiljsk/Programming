#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};

class queue{
	node *front,*rear,*p,*n;
	public:
		queue(){
			front = NULL;
			rear = NULL;
		}
		void enque(){
			int num;
			cout<<"Enter a number"<<endl;
			cin>>num;
			n = new node;
			n->data = num;
			n->next = NULL;
			if(front == NULL){
				front = n;
				rear = n;
			}
			else{
				rear->next = n;
				rear = n;
			}
		}
		void deque(){
		}
		void display(){
			p=front;
			while(p!=NULL)
			{
				cout<<p->data<<endl;
				p=p->next;
			}
		}
};

int main(){
	queue q;
	q.enque();
	q.enque();
	q.enque();
	q.enque();
	q.display();
	return 0;
}
