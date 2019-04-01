#include<iostream>
using namespace std;

struct emp{
	char name[10];
	int id,salary;
};

void display(emp *s,int idl,int n);

int main(){

	int n,i,idl;
	cout<<"Enter the number of employees"<<endl;
	cin>>n;
	emp *s=new emp[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter details"<<endl;
		cin>>s[i].name>>s[i].id>>s[i].salary;
	}
	cout<<"enter"<<endl;
	cin>>idl;
	
	display(s,idl,n);
	return 0;
}
void display(emp *s,int idl,int n)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i].id==idl)
			cout<<s[i].name;
		}
	}
