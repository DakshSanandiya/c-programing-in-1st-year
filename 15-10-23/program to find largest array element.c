#include <stdio.h>

void main (){
	int n,b;
	printf("enter a size of arry: ");
	scanf("%d",&n);
	int a[n],i,larg = 0;
	for (i=0;i<n;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if(a[i]>larg){
			larg = a[i];
			b=i;
	    }
	}
	printf("largest is a[%d] : %d ",b,larg);
}
