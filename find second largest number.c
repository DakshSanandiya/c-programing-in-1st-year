#include <stdio.h>

void main (){
	
	int a,b,c;
	printf("enter any 3 int number: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c && c>b){
		printf("%d is second largest",c);
	}else if(a>b && a>c && b>c){
		printf("%d is second largest",b);
	}else{
		printf("%d is second largest",a);
	}
}
