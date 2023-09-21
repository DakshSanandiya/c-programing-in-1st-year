#include <stdio.h>

void main()
{
	int n,i=1,f=1;
	printf("enter any int number: ");
	scanf("%d",&n);
	while (i<=n){
		f=f*i;
		i++;
	}
	printf("%d",f);
}
