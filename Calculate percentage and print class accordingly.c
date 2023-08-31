#include<stdio.h>

void main(){
	int a,b,c,d,e;
	float q;
	printf("enter your 5 sub marks: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	q=(a+b+c+d+e)/(float)5;
	
	if(q<35){
	printf("fail");
	}
	else if(q>=35 && q<45){
	printf("pass class");
	}
	else if(q>=45 && q<60){
	printf("second class");
	}
	else if(q>=60 && q<70){
	printf("first class");
	}
	else if(q>=70){
	printf(" Distinction");
	}
	else{
	printf("invalid marks");
	}
}
