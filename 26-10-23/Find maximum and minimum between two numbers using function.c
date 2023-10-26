#include <stdio.h>

void maxamin(int,int);

void main (){
	int a,b;
	printf("enter a value of a & b : ");
	scanf("%d %d",&a,&b);
	
	maxamin(a,b);
}

void maxamin(int x,int y){
	if (x<y){
		printf("%d is max",y);
	}
	else {
		printf("%d is max",x);
	}
}
