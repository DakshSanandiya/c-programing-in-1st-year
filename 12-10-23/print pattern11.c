#include <stdio.h>

void main ()
{

	int i,j,n=1;
	for (i=1;i<=5;i++){
		for (j=1;j<=i;j++){
			
			printf("%d ",n);
			if(n==1){
				n=0;
			}else {
				n=1;
			}
	
		}
		
		printf("\n");
	}
	
}
