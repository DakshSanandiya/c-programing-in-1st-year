#include <stdio.h>

void main (){
	int r,c;
	printf("enter a value of row: ");
	scanf("%d",&r);
	printf("enter a value of column: ");
	scanf("%d",&c);
	int a[r][c],b[r][c],d[r][c],i,j;
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a value of a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			printf("enter a value of b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			d[i][j] = a[i][j] + b[i][j];
		}
	}
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d  ",d[i][j]);
		}
		printf("\n");
	}
}
