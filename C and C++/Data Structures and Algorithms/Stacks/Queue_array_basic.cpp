#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class queue{
	int arr[6],front,rear;
	public:
		queue(){
			front=0;
			rear=0;
		}
		void insert()
		{
			cout<<"Enter a number"<<endl;
			int num;
			cin>>num;
			if(rear<6)
			{
				arr[rear]=num;
				rear+=1;
				cout<<"Inserted"<<endl;
				getch();
			}
			else{
				cout<<"Overflow"<<endl;
				getch();
			}
		}
		void delete1(){
			if(front>rear)
			{
				cout<<"Underflow"<<endl;
				getch();
			}
			else{
				front+=1;
				cout<<"Deleted"<<endl;
				getch();
			}
		}
		void display(){
			int i;
			cout<<"rear:"<<rear<<front<<endl;
			for(i=front;i<rear;i++)
			cout<<arr[i]<<endl;
			getch();	
		}
};
int main()
{
	queue q;
	int choice;
	while(1>0){
	system("CLS");
	cout<<"Enter a choice \n1.Insert\n2.Display\n3.Delete\n4.Exit"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			q.insert();
			break;
		case 2:
			q.display();
			break;
		case 3:
			q.delete1();
			break;
		case 4:
			exit(0);
		default:cout<<"Enter right option"<<endl;
	}
	}
}
