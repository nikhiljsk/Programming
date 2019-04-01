#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;
class data
{
	int x;
	char name[10],sec[5],roll[3];
	float m1,m2,m3,m4,m5,total;
	public:
		void get();
		void assign(int g,int a,int b,int c,int d,int e,char r[10],char q[3]);
		void display(int i,int n);
		void show();
		void xit();
		int ret(){return total;}
		char* ret1(){return roll;}
		char* ret7(){return name;}
};
void home();


int main()
{
	home();	
	getch();
	return 0;
}

void home()
{
		system("CLS");
		data d[3];	
		int z;
		cout<<endl<<endl;
		cout<<"\t\t\t\t    Welcome to University report card generation system"<<endl<<endl<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t    Navigation"<<endl<<endl;
		cout<<"\t\t\t\t    1.Enter Marks,Sort,Delete and Update"<<endl<<endl;
		cout<<"\t\t\t\t    2.View your result"<<endl<<endl;
		cout<<"\t\t\t\t    3.Exit"<<endl<<endl<<endl<<endl;
		cout<<"Please enter your option"<<endl;
		cin>>z;
		switch(z)
			{
				case 1:
					goto mem;
				case 2:
					d[0].show();
				case 3:
					d[0].xit();
				default:
					cout<<"Please choose appropriate option"<<endl;
					getch();
					home();
			}
	mem:
	system("CLS");
	int n,i;
	cout<<"Enter the no of Students"<<endl;
	cin>>n;
	data *s=new data[n];
	for(i=0;i<n;i++)
	{
		(s+i)->get();
	}
	cout<<"Marks saved successfully"<<endl;
	getch();	
	int j,r,q;
	char p1[10],q1[10],q2[3],p2[3];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			r=(s+i)->ret();
			q=(s+j)->ret();
			data ak[n];
			if(r<q)
			{
				ak[i]=*(s+i);
				*(s+i)=*(s+j);
				*(s+j)=ak[i];
				
			}
		}
	}
	system("CLS");
	cout<<"\t\t\t\t\t    Sorting of entered results"<<endl<<endl<<endl;
	for(i=0;i<n;i++)
	(s+i)->display(i,n);
	getch();
	system("CLS");
	char ch1,g[3];
	cout<<"Do you want to delete any content?     [y/n]"<<endl;
	cin>>ch1;
	if(ch1=='y'||ch1=='Y')
	{
		cout<<"Enter the roll number"<<endl;
		cin>>g;
		for(i=0;i<n;i++)
		{
			if(strcmp(g,(s+i)->ret1())==0)
			{
				cout<<"found"<<endl;
				(s+i)->assign(0,0,0,0,0,0,"0","0");
				(s+i)->display(-1,0);
				getch();
			}
		}
			cout<<"Do you want to update any content?   [y/n]"<<endl;
				cin>>ch1;
				if(ch1=='y'||ch1=='Y')
				system("CLS");
				else
				home();
	}
	else
	{
		cout<<"Do you want to update any content?   [y/n]"<<endl;
				cin>>ch1;
				if(ch1=='y'||ch1=='Y')
				system("CLS");
				else
				home();
	}
	char nz[3],az[3];
	system("CLS");
	cout<<"\t\t\t\t\t      Update Result"<<endl;
	cout<<endl<<endl<<endl<<"Enter the roll number of the student"<<endl;
	cin>>nz;
	int w1,w2,w3,w4,w5,w,co=0;
	for(i=0;i<4;i++)
	{
	if(strcmp(nz,(s+i)->ret1())==0)
		{
			co=1;
			cout<<"\t\t\t\t";cout<<"Enter the marks of respective subjects"<<endl;
			cout<<"\t\t\t\t";cout<<"Subject 1 : "<<endl<<endl;
			cin>>w1;
			cout<<"\t\t\t\t";cout<<"Subject 2 : "<<endl<<endl;
			cin>>w2;
			cout<<"\t\t\t\t";cout<<"Subject 3 : "<<endl<<endl;
			cin>>w3;
			cout<<"\t\t\t\t";cout<<"Subject 4 : "<<endl<<endl;
			cin>>w4;
			cout<<"\t\t\t\t";cout<<"Subject 5 : "<<endl<<endl;
			cin>>w5;
			w=(w1+w2+w3+w4+w5);
			strcpy(az,(s+i)->ret7());
			(s+i)->assign(w,w1,w2,w3,w4,w5,az,nz);
			(s+i)->display(i,n);
		}
	}
	if(co==0)
	cout<<"content not found"<<endl;
	getch();
	delete(s);
	home();
}
void data::get()
		{
		ofstream f("data.txt",ios::app);
		cout<<"Enter the name of the student"<<endl;
		cin>>name;
		cout<<"Enter the roll number of "<<name<<endl;
		cin>>roll;
		cout<<"Enter the marks of 1st subject"<<endl; 
		cin>>m1;
		cout<<"Enter the marks of 2nd subject"<<endl; 
		cin>>m2;
		cout<<"Enter the marks of 3rd subject"<<endl; 
		cin>>m3;
		cout<<"Enter the marks of 4th subject"<<endl; 
		cin>>m4;
		cout<<"Enter the marks of 5th subject"<<endl; 
		cin>>m5;
		total=(m1+m2+m3+m4+m5);
		f<<endl<<roll<<endl<<name<<endl<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl<<endl<<endl;
		f.close();	
		}
		
		
void data::show()
{
	system("CLS");
	char n[3],a[3],b[3];
	int z,y[5],per,total=0;
	system("CLS");
	cout<<"\t\t\t\t    Report Card Generator"<<endl<<endl;
	cout<<"Enter the roll number of the student to display the result"<<endl;
	cin>>n;
	int z1=0;
	ifstream f1("data.txt");
	while(!f1.eof())
	{
		f1>>a;
		if(strcmp(a,n)==0)
		{
			z1=1;
			system("CLS");
			cout<<endl;
			cout<<"\t\t\t\t\t\tR e p o r t  C a r d"<<endl<<endl<<endl;
			f1>>b;
			cout<<"\t\t\t\t\t\t";
			cout<<"Name         :    ";
			cout<<b<<endl<<endl<<endl;
			for(int i=0;i<5;i++)
			{
			cout<<"\t\t\t\t\t\t";
			cout<<"Subject "<<i+1<<"    :    ";
			f1>>z;
			y[i]=z;
			cout<<z<<endl<<endl<<endl;
			}
			for(int j=0;j<5;j++)
			{
				total=total+y[j];
			}
			per=total/5;
			cout<<"\t\t\t\t\t\t";
			cout<<"Total        :    "<<total<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t";
			cout<<"Percentage   :    "<<per<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t";
			cout<<"Remarks      :    ";
			if(per>90)
			cout<<"First class performance.Keep it up!"<<endl;
			else if(per>70)
			cout<<"Good performance.Can do better with effort"<<endl;
			else if(per>50)
			cout<<"Not up to the mark.Work hard"<<endl;
			else
			cout<<"Failed! Learn the entire course one more year. :("<<endl;
			}
	}
	if(z1==0)
	cout<<endl<<endl<<endl<<"Please check entered roll number.\nRecord does not exist."<<endl;
	f1.close();
	getch();
	home();
}
void data::display(int i,int n)
{
	cout<<"\t\t\t\t\t";cout<<"Details "<<i+1<<endl;
	cout<<"\t\t\t\t\t";cout<<"Rank    :    "<<i+1<<endl;
	cout<<"\t\t\t\t\t";cout<<"Name    :    "<<name<<endl;
	cout<<"\t\t\t\t\t";cout<<"Roll No :    "<<roll<<endl;
	cout<<"\t\t\t\t\t";cout<<"Sub 1   :    "<<m1<<endl;
	cout<<"\t\t\t\t\t";cout<<"Sub 2   :    "<<m2<<endl;
	cout<<"\t\t\t\t\t";cout<<"Sub 3   :    "<<m3<<endl;
	cout<<"\t\t\t\t\t";cout<<"Sub 4   :    "<<m3<<endl;
	cout<<"\t\t\t\t\t";cout<<"Sub 5   :    "<<m3<<endl;
	cout<<"\t\t\t\t\t";cout<<"Total   :    "<<total<<endl;
	cout<<"\t\t\t\t\t";cout<<"Per     :    "<<total/5<<endl;
	cout<<endl<<endl<<endl;	
}
void data::assign(int g,int a,int b,int c,int d,int e,char r[10],char q[3])
{
	strcpy(name,r);strcpy(roll,q);
	total=g;m1=a;m2=b;m3=c;m4=d;m5=e;
}
void data::xit()
{
	exit(0);
}
