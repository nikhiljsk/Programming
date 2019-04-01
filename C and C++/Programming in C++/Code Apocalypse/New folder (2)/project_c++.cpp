#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void home();
class student
{
	public:
	char name[20],rollno[20];
	int m1,m2,m3,m4,m5,per,num,total;
	public:
		void show()
		{
			ofstream in("sort.txt",ios::app);
			in<<name;
			in<<"\n";
			in<<rollno;
			in<<"\n";
			in<<m1;
			in<<"\n";
			in<<m2;
			in<<"\n";
			in<<m3;
			in<<"\n";
			in<<m4;
			in<<"\n";
			in<<m5;
			in<<"\n";
			in.close();
			cout<<endl<<endl;
			cout<<"Name:"<<name<<endl<<"Rollno:"<<rollno<<endl<<"C++:"<<m1<<endl<<"Html:"<<m2<<endl<<"Maths:"<<m3<<endl<<"Ece:"<<m4<<endl<<"Blender:"<<m5<<endl<<"Total:"<<total;
		}
		void get()
		{
			cout<<"\n\t\t\tEnter name of student:";
			cin>>name;
			cout<<"\t\t\tEnter rollno:";
			cin>>rollno;
			cout<<"\t\t\tEnter marks of 5 subjects \n";
			cout<<"\t\t\tC++:";
			cin>>m1;
			cout<<"\t\t\tHtml:";
			cin>>m2;
			cout<<"\t\t\tMaths:";
			cin>>m3;
			cout<<"\t\t\tEce:";
			cin>>m4;
			cout<<"\t\t\tBlender:";
			cin>>m5;
			try
			{
				if(m1>100 || m2>100 || m3>100 || m4>100 || m5>100)
				throw 5;
			}
			catch(...)
			{
				cout<<"\nMarks of single subject cannot be greater than 100\n";
				cout<<"Enter valid marks\n";
				
				getch();
				home();
			}
			total=m1+m2+m3+m4+m5;
			try
			{
				if(total>500)
				throw 4;
			}
			catch(...)
			{
				cout<<"\nTotal cannot be greater than 500";
				cout<<"\nEnter valid marks";
				getch();
				home();
			}
			ofstream in("data.txt",ios::app);
			in<<name;
			in<<"\n";
			in<<rollno;
			in<<"\n";
			in<<m1;
			in<<"\n";
			in<<m2;
			in<<"\n";
			in<<m3;
			in<<"\n";
			in<<m4;
			in<<"\n";
			in<<m5;
			in<<"\n";
			in.close();
			cout<<"\t\t\tMarks saved successfully\n";
		}
		int retur()
		{
			return total;
		}
		void search()
		{
			system("cls");
			char ch[5],a[5];
			cout<<"\t\t------------------------------------REPORT CARD---------------------------------------------";
			cout<<"\n\nEnter the roll.no for which you want to generate report card";
			cin>>ch;
			int b,i,c;
			per=0;
			ifstream out("data.txt");
			cout<<"\nMarks obtained by roll.no: "<<ch<<" are as follows\n";
			while(!out.eof())
			{
				out>>a;
				if((strcmp(ch,a))==0)
				{
					for(i=0;i<5;i++)
					{
						out>>c;
						if(i==0)
						cout<<"C++: "<<c<<"\n";
						if(i==1)
						cout<<"Html: "<<c<<"\n";
						if(i==2)
						cout<<"Maths: "<<c<<"\n";
						if(i==3)
						cout<<"Ece: "<<c<<"\n";
						if(i==4)
						cout<<"Blender: "<<c<<"\n";
						per=(per+c);
					}
					cout<<"\nPercentage is:"<<per/5<<"%\n";
					cout<<"\nRemarks:";
					if(per/5 > 90)
					cout<<"Good Performance\n\n";
					if(per/5 > 70 && per/5 < 90 )
					cout<<"Can do better\n\n";
					if(per/5 > 50 && per/5 < 70)
					cout<<"Need to work hard\n\n";
					if(per/5 < 40)
					cout<<"Failed and should clear them soon\n\n";
				}
				else
				{
					continue;
				}
			}
			out.close();
			getch();
			home();
		}
};
void home()
{
	system("cls");
	student s[20];
	cout<<"                            \t\tSTUDENT REPORT CARD GENERATION\n";
	cout<<"------------------------------------------------------------------------------------------------------------------------";
	int choice;
	cout<<"\n\t\t\t 1) Enter data and sort\n";
	cout<<"\t\t\t 2) Display Report Card\n";
	cout<<"\t\t\t 3) Edit data\n";
	cout<<"\t\t\t 4) Exit\n";
	cout<<"\n\t\t\tEnter the option of your choice";
	cin>>choice;
	switch(choice)
	{
		case 1: 
			goto data;
		case 2:
			s[0].search();
		case 3:
			system("cls");
			int number;
			cout<<"Enter the number of students data you want to add to the file";
			cin>>number;
			for(int d=0;d<number;d++)
			{
				s[d].get();
			}
			home();
		case 4:
			exit(0);
		default:
			cout<<"Choose correct option";
			system("cls");
			home();
	}
data:
	system("cls");
	int n,i;
	char num[5];
	cout<<"\nEnter the no.of you students data you want to store";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		int a1,a2;
		a1=s[i].retur();
		a2=s[j].retur();
		student a3[n];
		if(a1<a2)
		{
			a3[i]=s[i];
			s[i]=s[j];
			s[j]=a3[i];
		}
		}
	}
	cout<<"Data after sorting based on total";
	for(int k=0;k<n;k++)
	{
		s[k].show();
	}	
	getch();
	system("cls");
	home();
}
int main()
{
	home();
	return 0;
	getch();
}
