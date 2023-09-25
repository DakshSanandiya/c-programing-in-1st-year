#include <stdio.h>

void main ()
{
	int n,r,re,a;
	printf("enter a number: ");
	scanf("%d",&n);
	while (n != 0){
		r  = n % 10;
		re = re*10+r;
		n /= 10; 
	}
	while (re != 0){
		a  = re % 10;
		printf("%d\n",a);
		re /= 10; 
}
}
