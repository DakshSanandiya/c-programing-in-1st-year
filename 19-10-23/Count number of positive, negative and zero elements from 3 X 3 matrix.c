#include <stdio.h>

void main (){
	int a[3][3],i,j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter a value of a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int p=0,n=0,z=0;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (a[i][j] > 0){
				p++;
			}
			else if (a[i][j] < 0){
				n++;
			}
			
			else if (a[i][j] == 0){
				z++;
			}
		}
	}
	printf("positive = %d\nnagetive = %d\nzero = %d",p,n,z);
}
