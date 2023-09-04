#include <stdio.h>

void main ()
{
	int a,b,c;
	printf("enter value of Three sides of a triangle: ");
	scanf("%d %d %d",&a,&b,&c);	

	if (a == b && b == c){
		printf("the triangle is equilateral");
	}

else if(a == b || b == c || c == a){
	
	printf("the triangle is isosceles\n");
	
}else {
	printf("the triangle is scalene");
}
	
}
