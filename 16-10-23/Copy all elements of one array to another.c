#include <stdio.h>

void main (){
	int n;
	printf("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,b[n];
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("b[%d]: %d\n",i,b[i]);
	}
}
