#include<stdio.h>

void main(){
	float a,b;
	printf("enter your B.S.: ");
	scanf("%f",&a);
	
	
	if(a>=10000){
	printf("ans = %f",a+(a*20/100)+(a*80/100));
	}
	else if(a>=20000){
	printf("ans = %f",a+(a*25/100)+(a*90/100));
	}
	else if(a>=30000){
	printf("ans = %f",a+(a*30/100)+(a*95/100));
	}
	else if(a<10000){
	printf("ans = %f",a+(a*15/100)+(a*7/100));
	}
}
