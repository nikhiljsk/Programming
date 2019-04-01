#include<iostream>
using namespace std;
struct studentRecord{
	int roll;
	string name;
	int marks;
};
int main(){
	studentRecord s[2];
	for(int i=0;i<2;i++)
	{
	cout<<"Enter the name roll and marks of the student "<<endl;
	cin>>s[i].name>>s[i].roll>>s[i].marks;
	}
	cout<<"Entered data is "<<endl;
	for(int i=0;i<2;i++)
	cout<<"Name: "<<s[i].name<<endl<<"Roll: "<<s[i].roll<<endl<<"Marks: "<<s[i].marks<<endl<<endl<<endl;
	return 0;
}

