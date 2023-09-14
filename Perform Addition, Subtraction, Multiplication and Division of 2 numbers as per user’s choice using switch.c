#include <stdio.h>

void main () {
	int a,b,c;
	char z;
	printf("enter your any 2 int number: ");
	scanf("%d %d",&a,&b);
	
	printf("enter any  operator(+,-,*,/): ");
	scanf(" %c",&z);
	
	switch(z){
		case '+':
			c = a + b;
		break;
		case '-':
			c = a - b;
		break;
		case '*':
			c = a * b;
		break;
		case '/':
			c = a / b;
		break;
	}
	printf("%d",c);
}
