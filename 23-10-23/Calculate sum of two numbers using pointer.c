#include <stdio.h>

void main(){
	int a,b,c,*a1,*b1,*c1;
	
	printf("enter a value of a & b: ");
	scanf("%d %d",&a,&b);
	
	a1 = &a;
	b1 = &b;
	
	c1 = *a1 + *b1;
	
	printf("sum = %d",c1);
	
}
