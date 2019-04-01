//WAP to show the palindromes from 1 to n(where n is entered by the user)
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,loop,count=0,tmp,rev;
	printf("Enter a number");
	scanf("%d",&k);
	for(i=11;i<=k;i++)
	{
		rev=0;
		tmp=i;
		loop=i;
		while(loop!=0)
		{
			j=loop%10;
			loop=loop/10;
			rev=rev*10+j;
		}
		if(rev==tmp)
		{
			printf("%d is palindrome\n",tmp);
			count++;
		}
		else
		printf("%d is not a palindrome\n",tmp);
	}
	printf("Number of palindromes are %d",count);
	printf("\nNumber of non-palindromes are %d ",k-count);
	getch();
}

