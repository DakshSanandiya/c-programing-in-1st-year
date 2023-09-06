#include <stdio.h>

void main (){
	
	int a,b,c;
	printf("enter any 3 int number: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			if(c>b){
				printf("%d is second largest",c);
			}else {
				printf("%d is second largest",b);
			}
		}else {
			printf("%d is second largest",a);
		}
	}else {
	if(b>c){
			if(a>c){
				printf("%d is second largest",a);
			}else {
				printf("%d is second largest",c);
			}
		}else {
			printf("%d is second largest",b);
		}
		}
}
