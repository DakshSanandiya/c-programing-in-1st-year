#include<stdio.h>

void main(){
	float a,b;
	char c;
	printf("enter a arithmetic operators: ");
	scanf("%c",&c);
	printf("enter any 2 int number: ");
	scanf("%f",&a);
	scanf("%f",&b);
	
	if(c=='+'){ 
	printf("ans = %f",a+b);
	}
	else if(c=='-'){
	printf("ans = %f",a-b);
	}
	else if (c=='*'){
	printf("ans = %f",a*b);
	}
	else if(c=='/'){
	printf("ans = %f",a/b);
	}
	
	
	
}
