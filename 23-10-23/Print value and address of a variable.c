#include <stdio.h>

void main (){
	int a = 10,*p;
	p = &a;
	printf("%d \n%d \n",p,*p);
}
