#include <stdio.h>

void main ()
{
	int n,i=2,count=0;
	printf("enter a num: ");
	scanf("%d",&n);
	while (i < n){
		if (n % i == 0){
			count +=1;
		}
		i++;
	}
	if (count == 0){
		printf("%d number is prime",n);
	}else {
		printf("%d number is not prime",n);
	}
}
