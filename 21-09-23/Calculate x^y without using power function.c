#include <stdio.h>

void main ()
{
	int x,y,i=1,power=1;
	
	printf("enter value of x: ");
	scanf("%d",&x);
	
	printf("enter value of y : ");
	scanf("%d",&y);
	while (i<=y){
		power *= x;
		i++;
	}
	printf("ans = %d",power);
	
}
