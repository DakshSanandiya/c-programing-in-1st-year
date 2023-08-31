#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter your val of a: ");
	scanf("%d",&a);
	
	printf("enter your val of b: ");
	scanf("%d",&b);
	printf("a=%d",a);
	printf("b=%d\n",b);
    
    c=a,a=b,c=b;
    
    printf("a=%d",a);
	printf("b=%d\n",b);
}
