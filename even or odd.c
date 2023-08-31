#include<stdio.h>

void main(){
	int a;
	printf("enter an int value: ");
	scanf("%d",&a);
	
	if(a%2==0){
	printf("number is even");
	}
	else if(a%2==1){
	printf("numer is odd");
	}
}
