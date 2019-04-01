#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct univ
{
	char name[10],city[10];
	int roll,marks;
	
}a[10];
void getdata(int n)
{
	
	for(int i=0;i<n;i++)
{
	cout<<"Enter name,city,roll number and marks"<<ends;
	cin>>a[i].name>>a[i].city>>a[i].roll>>a[i].marks;
}
}

void search(int n)
{
	char str[10];
	int count=1;
	int i;
	cout<<"Type a name"<<endl;
	cin>>str;
	for(i=0;i<=n;i++)
	{
	if(strcmp(a[i].name,str)==0)
	cout<<"found data"<<endl;
	cout<<a[i].name <<a[i].roll <<endl<<a[i].city <<a[i].marks<<endl;
	count++;
	break;
	}
	if(count==1)
	{
		cout<<"Data not found"<<endl;
	}
}
int main()
{	int n;
	cout<<"Enter the number of entries"<<endl;
	cin>>n;
	getdata(n);
	search(n);
	getch();
	return 0;
}
