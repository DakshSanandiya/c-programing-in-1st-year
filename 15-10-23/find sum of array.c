#include <stdio.h>

void main (){
	int n;
	printf("enter a size of arry: ");
	scanf("%d",&n);
	int a[n],i,sum=0;
	for (i=0;i<n;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		sum += a[i];
	}
	printf("sum = %d",sum);
}
	
