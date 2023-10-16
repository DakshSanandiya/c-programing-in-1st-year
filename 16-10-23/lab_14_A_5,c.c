#include <stdio.h>

void main (){
	int a[5],i,b[5],h=0,w=0,j;

	for (i=0;i<5;i++){
		printf("enter your height: ");
		scanf("%d",&a[i]);
	}
		for (j=0;j<5;j++){
		printf("enter your weight: ");
		scanf("%d",&b[j]);
	}
	for (i=0;i<5;i++){
		if (a[i]>170 && a[i]<50){
			h++;
		}
	}
	printf("%d person height greater than 170 and person weight less than 50",h);
}
