#include <stdio.h>

void main (){
	int n;
	printf("enter a size of arry: ");
	scanf("%d",&n);
	int a[n],i;
	for (i=0;i<n;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	printf("The Reverse order is :\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
