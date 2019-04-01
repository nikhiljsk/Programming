#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,l,z,sum=0,sum1=0;
	char s[16],c[16],k[16];
	puts("enter a string");
	gets(s);
	for(i=0,j=0,l=0;i<16;i++,j++,l++)
	{
		if(i%2==0)
		{
			c[j]=s[i]*2;
			printf("%d\n",s[i]);
			//printf("%d\t",c[j]);
			if(c[j]>10)
			{
				k[l]=c[j]-9;
			}
			else
			{
			k[l]=c[j];
		    }
		}
		else
		{
		sum1=sum1+s[i];
	    }  
	}
	printf("%s\n",k);
	printf("%s\n",c);
	printf("%s\n",s);
	for(i=0;i<16;i++)
	{
		sum=sum+k[i];
	}
	printf("%d\n",sum);
	printf("remaining sum is %d\n",sum1);
	z=sum+sum1;
	printf("%d",z);
	if(z%10==0)
	printf("your credit card is valid");
	else
	printf("wrong");
	return 0;
	getch();
}
