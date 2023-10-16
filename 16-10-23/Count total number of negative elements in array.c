#include <stdio.h>

void main (){
	int n;
	printf("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,p=0;
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if (a[i]<0){
			p++;
		}
	}
	printf("negative = %d",p);
}
