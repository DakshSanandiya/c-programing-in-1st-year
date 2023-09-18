#include <stdio.h>

void main ()
{
	int a,i;
	
	printf("enter any 2 int number: ");
	scanf("%d %d",&i,&a);
	
	while(i<=a){
		if(i % 2 == 0){
			printf("%d ",i);
		}
	i++;
	}
	
}
