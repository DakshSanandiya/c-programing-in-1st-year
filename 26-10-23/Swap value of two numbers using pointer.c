#include <stdio.h>

void main (){
	int *a,*b,c,d,t;

	printf("enter a value of a & b : ");
	scanf("%d %d",&c,&d);
	a = &c;
	b = &d;
	
	t = *a;
	*a = *b;
	*b = t;
	
	printf("a = %d & b = %d",*a,*b);
	
}
