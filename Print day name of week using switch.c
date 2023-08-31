#include <stdio.h>

void main(){
	int a;
	printf("enter in num (0-6): ");
	scanf("%d",&a);
	
	switch(a){
	 
	case 0:
	printf("monday");
	break;
	
	case 1:
	printf("tuesday");
	break;

	case 2:
	printf("wenesday");
	break;
	case 3:
	printf("thursday");
	break;
	
	case 4:
	printf("friday");
	break;

	case 5:
	printf("saturday");
	break;
	
	case 6:
	printf("sunday");
	break;
	default:
	printf("wrong input");
	break;
	
	}
	printf("\nthank you");
}
