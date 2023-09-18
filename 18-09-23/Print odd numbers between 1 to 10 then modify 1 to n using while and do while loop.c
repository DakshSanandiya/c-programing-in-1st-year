#include <stdio.h>

void main ()
{
	int a,i=0;
	printf("enter any int number: ");
	scanf("%d",&a);
	while (i<=a){
		if (i % 2 != 0){
			printf("%d ",i);
		}
	i++;
	}
	
}
