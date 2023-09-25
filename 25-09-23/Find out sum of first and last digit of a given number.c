#include <stdio.h>

void main ()
{
	int n,sum=0,in,fn;
	
	printf("enter a number: ");
	scanf("%d",&n);
	
	in = n % 10;
	while(n>=10){
		n /= 10;
	}
	 fn = n;
	 sum = fn + in;
	 printf("%d",sum);
	
}
