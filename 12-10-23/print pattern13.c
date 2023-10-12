#include <stdio.h>

void main ()
{

	int i,j,n=65;
	
	for (i=1;i<=5;i++){
		for (j=1;j<=5-i;j++){
			printf(" ");
		}
		for (j=1;j<=i;j++){
			if(i % 2 != 0){
				printf("%d ",j);
			}else {
				printf("%c ",n);
				n++;
			}
		}
		printf("\n");
	}
	
}
