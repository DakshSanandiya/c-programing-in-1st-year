#include <stdio.h>

void main ()
{
	int n,i=0,sum=0;
	printf("enter any int number: ");
	scanf("%d",&n);
	while(i<=n){
		if(i % 2 == 0){
			sum = sum - i;
		}else {
			sum = sum + i;
		}
		i++;
	}printf("%d",sum);
	
	
}
