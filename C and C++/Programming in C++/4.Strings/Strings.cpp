/*
Available functions in strings
1.length or size
2.clear
3.empty
4.erase(a,b)
5.replace(a,b,string)
6.append
7.insert(a,str)
8.substr(2,5)
Available operators in strings
1.+ (strcat)
2.= (assignment operator or strcpy)
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a="abcd";//string is a class here and a is an object
	cout<<a<<endl;
	string a1("ABCD");//string s2; s2="elsdk"
	cout<<a1<<endl;
	cout<<a.length()<<endl;//length of string
	cout<<a1.size()<<endl;//size of string
	a.clear();//deletes all the characters in the string
	cout<<a.length()<<endl;
	cout<<a.empty()<<endl;//used to check whether the sting contains characters or not
	cout<<a1.empty()<<endl;
	a1.erase(2,1);//first is arguement is the location and second is the no of characters to be deleted
	cout<<a1<<endl;
	a1.replace(1,2,"EF");//first arguement is the location and second is the no of characters and third is the string to be inserted
	cout<<a1<<endl;
	a1.replace(1,2,"GHIJK");
	cout<<a1<<endl;
	a1.replace(1,2,"SQR");
	cout<<a1<<endl;
	a.append("MYNAMEIS");//Used to append the text
	cout<<a<<endl;
	a.append(" KHAN");
	cout<<a<<endl;
	a.insert(2," ");//Used to insert text(second arguement) in the location(first arguement)
	cout<<a<<endl;
	a.insert(7," ");
	cout<<a<<endl;
	cout<<"hello"<<endl;
	string a2=a.substr(3,4);
	cout<<a.substr(3,4)<<endl;
	cout<<a.substr(3)<<endl;
	cout<<endl<<a<<endl<<a1<<endl<<a2<<endl<<endl;
	string a4=a+a1;//string concatenation since strcat does not work in c++
	cout<<a4<<endl;
	string a5=a+" "+a1;//if you want to insert a string
	cout<<a5<<endl;
	a5.replace(16,7,"Movie");
	cout<<a5<<endl;
	string a6=a5;
	cout<<a6<<endl;
	a6=a2;//assignment operator 
	cout<<a6<<endl;
}
