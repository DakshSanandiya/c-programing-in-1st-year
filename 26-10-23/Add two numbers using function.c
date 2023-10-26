#include <stdio.h>

void add(int,int);

void main (){
	int a,b,c;
	printf("enter a value of a & b: ");
	scanf("%d %d",&a,&b);
	
	add(a,b);

}

void add(int a,int b){
	int c;
	c = a + b;
	printf("sum = %d",c);
}
