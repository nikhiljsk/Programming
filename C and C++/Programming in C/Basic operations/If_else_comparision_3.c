#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the values of a,b and c ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{if(a>c)
	{printf("a is greater");
	}
	else
	{printf("c is greater");
	}
	}
	else
	{if(b>c)
	{printf("b is greater");
	}
	else
	{printf("c is greater");
	}
	}
	getch();
}
