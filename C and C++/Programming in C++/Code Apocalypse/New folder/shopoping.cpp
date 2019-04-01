#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Item
{
	private:
		int itcode,qty,rate,amt;
		char iname[10];
		public:
			void getdata()
			{
				cout<<"Enter item code"<<endl;
				cin>>itcode;
				cout<<"enter item name"<<endl;
				cin>>iname;
				cout<<"enter item quantity &rate"<<endl;
				cin>>qty>>rate;
				amt=qty*rate;
			}
			void showdata()
			{
				cout<<itcode<<setw(10)<<iname<<setw(10)<<qty<<setw(5)<<rate<<setw(8)<<amt<<endl;
			}
			int friend search(Item ,int);
			void friend sortbill(Item*,int);
};
int search(Item il,int n)
{
	if(il.itcode==n)
	{
		return(1);
	}
	else
	return (0);
}
void sortbill(Item it[],int n)
{
	Item temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(it[i].amt>it[j].amt)
			{
				temp=it[i];
				it[i]=it[j];
				it[j]=temp;
			}
		}
	}
}

int main()
{
	Item *iobj;
	int n;
	cout<<"enter no of items\n";
	cin>>n;
	//DMA
	iobj=new Item[n];
	cout<<"Enter records of"<<n<<"items"<<endl;
	for(int i=0;i<n;i++)
	{
		iobj[i].getdata();
	}
	cout<<endl;
	cout<<"Itcode"<<setw(10)<<"name"<<setw(10)<<"qty"<<setw(5)<<"rate"<<setw(8)<<"amount"<<endl;
	for(int i=0;i<n;i++)
	{
		iobj[i].showdata();
	}
	cout<<"-----------------------------"<<endl;
	//sorting
	cout<<"before sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		iobj[i].showdata();
	}
	sortbill(iobj,n);
	cout<<"after sortin"<<endl;
	for(int i=0;i<n;i++)
	{
		iobj[i].showdata();
	}
}
