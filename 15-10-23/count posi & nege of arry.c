#include <stdio.h>

void main (){
	int i,a[10],p=0,n=0;
	for (i=0;i<10;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++){
		if (a[i]<0){
			n++;
		}
		else {
			p++;
		}
	}
	printf("positive: %d\nnegetive: %d",p,n);
}
