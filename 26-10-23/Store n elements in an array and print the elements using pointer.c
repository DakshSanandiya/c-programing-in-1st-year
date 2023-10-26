#include <stdio.h>

void main (){
	int n;
	printf("enter a size of array: ");
	scanf("%d",&n);
	
	int *a[n],b[n],i;
	for (i=0;i<n;i++){
		printf("enter a value of a[%d]",i);
		scanf("%d",&b[i]);
		a[i] = &b[i];
	}
	for (i=0;i<n;i++){
		printf("%d\n",*a[i]);
	}
	
}
