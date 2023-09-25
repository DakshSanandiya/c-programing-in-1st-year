#include <stdio.h>

void main ()
{
	int n,r;
	printf("enter a number: ");
	scanf("%d",&n);
	while (n != 0){
		r  = n % 10;
		printf("%d",r);
		n /= 10; 
	}
	
	
}
