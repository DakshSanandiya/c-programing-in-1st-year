#include <stdio.h>

void main (){
	int n;
	printf("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,c=0;
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	int f,flag=0;
	printf("enter a search element: ");
	scanf("%d",&f);
	
	for (i=0;i<n;i++){
		
		if (a[i] == f){
		flag=1;
		}
	
	}
	if(flag == 1){
		printf("search found");
	}
	else {
		printf("search not found");
	}
}
