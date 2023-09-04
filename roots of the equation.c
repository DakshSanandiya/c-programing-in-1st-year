#include <stdio.h>
#include <math.h>
void main (){
	float a,b,c,d,r1,r2;
	printf("enter a value of a, b & c : ");
	scanf("%f %f %f", &a , &b , &c);
	
	d = b*b - 4*a*c;
	if(d == 0){
		printf("the roots are real and equal\n");
		r1 = -b/(2*a);
		r2 = -b/(2*a);
		
		printf("root 1 is %f and root 2 is %f",r1,r2);
	}
	else if(d>0){
		printf("the roots are real and different\n");
		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		
		printf("root 1 is %f and root 2 is %f",r1,r2);
	}else{
		printf("roots are imaginary");
	}
}
