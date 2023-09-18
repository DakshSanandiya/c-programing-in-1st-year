#include <stdio.h>

void main ()
{
	int a,i=0,sum=0;
	printf("enter any int number: ");
	scanf("%d",&a);
	
	while (i<=a){
		sum = sum + i;
		i++;
	}
	printf("sum = %d",sum);
}
