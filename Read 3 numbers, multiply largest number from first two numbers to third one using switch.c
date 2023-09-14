#include <stdio.h>

void main(){
	int a,b,c;
	printf("enter any 3 int number: ");
	scanf("%d %d %d",&a,&b,&c);
	
	(a>b)?printf("ans = %d",a*c):printf("ans = %d",b*c);
	
}
