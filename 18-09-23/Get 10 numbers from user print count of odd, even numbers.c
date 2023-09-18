#include <stdio.h>

void main ()
{
	
	int a,i=1,even=0,odd=0;
	printf("enter any int number: ");
	scanf("%d",&a);
	while (i<10){
		if (a % 2 == 0){
			even = even + 1;
		}else {
			odd = odd +1;
		}
		printf("enter any int number: ");
	scanf("%d",&a);
	i++;
	}
	printf("%d\n",even);
	printf("%d",odd);
}
