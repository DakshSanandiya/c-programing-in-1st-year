#include <stdio.h>

void main (){
	int n;
	printf("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,c=0;
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if (a[i] % 3 == 0){
			c++;
		}
	}
	printf("count elements divisible by 3 in array = %d",c);
}
