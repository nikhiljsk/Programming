/*  1
   121
  12321
 1234321*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k,x;
  printf("Enter a number");
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
    for(x=i-1;x>=1;x--) 
	{
      printf("%d",x);
    }
    printf("\n");
  }
  getch();
}
