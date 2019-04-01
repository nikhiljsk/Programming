#include<stdio.h>
#include<conio.h>
void main()
{
	float r,area,lenght,breadth;
	printf("Enter the radius of the circle to know to the area\n");
	scanf("%f",&r);
	area=r*r*3.14;
	printf("the area of the circle with radius %f is %f :\n",r,area);
	printf("Enter the lenght and breadth of the rectangle to know the area\n ");
	scanf("%f%f",&lenght,&breadth);
	area=breadth*lenght;
	printf("The area of the rectangle with length %f and breadth %f is %f",lenght,breadth,area);
	getch();
	
}
