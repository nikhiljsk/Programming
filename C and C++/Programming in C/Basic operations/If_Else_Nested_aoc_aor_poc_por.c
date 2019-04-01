#include<stdio.h>
#include<conio.h>
void main()
{
	float r,l,b,aor,aoc,por,poc;
	int o,p,q;
	printf("Enter  1 to perform operations related to rectangle and 2 to perform operations related to circle\n");
	scanf("%d",&o);
	if(o==1)
	{
		printf("Enter 1 to know the area of rectangle or 2 to know the perimetre of the rectangle\n");
		scanf("%d",&p);
		if(p==1)
		{
			printf("Enter the values of l and b\n");
			scanf("%f%f",&l,&b);
			aor=l*b;
			printf("The area of the rectangle is %f\n",aor);
		}
		else
		{
			printf("Enter the values of l and b");
			scanf("%f%f",&l,&b);
			por=2*(l+b);
			printf("The perimeter of rectangle is %f",por);
		}
	}
	else
	{
		printf("Enter 1 to know the area of circle or anu other number to know the circumference");
		scanf("%d",&q);
		
			if(q==1)
			{
			
			printf("Enter the value of r to know the area of circle");
			scanf("%f",&r);
			aoc=3.14*r*r;
			printf("The area of circle is %f",aoc);
			
		}
		    else
		{
			printf("Enter the value of r to know the circumference of circle");
			scanf("%f",&r);
			poc=2*3.14*r;
			printf("The circumference of the circle is %f",poc);
			
		}
		
	}
	getch();
	
}
