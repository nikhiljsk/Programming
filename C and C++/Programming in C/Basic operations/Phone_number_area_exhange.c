#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long int n,c,ex,a,y;
scanf("%ld",&n);
y=n/10000000;
c=n%10000000;
ex=c/10000;
a=c%10000;
printf("%ld %ld %ld ",y,ex,a);
getch();
}
