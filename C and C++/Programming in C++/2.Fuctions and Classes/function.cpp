#include<iostream>
#include<conio.h>
#define si z //defines that instead of si,z is used in the entire program
using namespace std;
float z(float p,float r=5,float t=1);
int main()
{
	float k;
	k=z(1000);
	cout<<"Simple Interest ="<<k<<endl;//endl is used to move to a new line i.e \n(\n can also be used
	k=si(1000,6);
	cout<<"Simple Interest ="<<k<<endl;
	getch();
	return 0;
	
}
float si(float p,float r,float t)
{
	float si=(p*t*r)/100;
	return si;
}
