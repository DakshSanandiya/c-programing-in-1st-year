#include <stdio.h>

void main (){
	int r,c;
	printf("enter a value of row: ");
	scanf("%d",&r);
	printf("enter a value of column: ");
	scanf("%d",&c);
	int a[r][c],i,j;
	for (i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("enter a value of a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
