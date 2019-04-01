#include<stdio.h>
#include<conio.h>
int isprime(int n);
void main()
{
	int i,j,n,c=0,k=1,flag=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
			flag=2;
			c++;
			break;
		    }
		}
		if(flag!=2)
		printf("%d is prime\n",i);
		else
		printf("%d is not a prime\n",i);
	}
	printf("the number of prime numbers are %d\n",n-c);
	if(isprime(n)==4)
	printf("%d is not a prime\n",n);
	else 
	printf("%d is prime",n);
	getch();
}
int isprime(int n)
{
	int i,k=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		k=4;
	}
	return k;
}
