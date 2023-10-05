#include <stdio.h>

void main ()
{
	int n,d,i,f[10] = {0};
	printf("enter an number: ");
	scanf("%d",&n);
	while (n!=0){
		d=n%10;
		f[d]++;
		n=n/10;
	}
	printf("frequency of each digit: \n");
	for (i=0;i<10;i++){
		printf("digit %d occurs %d times\n",i,f[i]);
	}
}
