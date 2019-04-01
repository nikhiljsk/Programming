#include<stdio.h>
#include<conio.h>
void main()
{float f,c;
printf("Enter the temperature in fareheit\n");
scanf("%f",&f);
c=(f-32)*5/9;
printf("The temperature in celcius is %f",c);
getch();
}
