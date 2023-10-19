#include <stdio.h>

void main (){
	int a[20][2],i,j;
	for(i=0;i<20;i++){
		for (j=0;j<2;j++){
			if (j == 0){
				printf("enter your roll no. : ");
				scanf("%d",&a[i][j]);
			}
			else {
			printf("enter your marks : ");
			scanf("%d",&a[i][j]);
			}
		}
	}
	for(i=0;i<20;i++){
		for (j=0;j<2;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
}
