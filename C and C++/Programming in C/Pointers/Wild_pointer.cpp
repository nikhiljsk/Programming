#include<stdio.h>
#include<conio.h>
int main(){
	int *p;//wild pointer
	*p=10;/* Some unknown memory location is being corrupted. 
   This should never be done.Explicit memory allocation can be used instead */
	printf("%d",*p);
	return 0;
}
