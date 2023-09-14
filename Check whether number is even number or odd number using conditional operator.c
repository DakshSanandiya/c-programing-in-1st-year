#include <stdio.h>

void main(){
	int a;
	printf("enter any int number: ");
	scanf("%d",&a);
	
	(a%2==0)?printf("%d is even",a):printf("%d is odd",a);
	
}
