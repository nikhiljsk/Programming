/*        1
         12
	    123
  	   1234
      12345
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
