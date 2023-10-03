#include <stdio.h>

void main ()
{
	int i,cp=0,cn=0,arr[5];
	for (i=0;i<5;i++){
		printf("enter a value of arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<5;i++){
		if (arr[i]>=0){
			cp++;
		}else {
			cn++;
		}
	}
	printf("positive: %d & nagetive: %d",cp,cn);
}
