#include <stdio.h>

void max(float,float,float);

void main (){
	float a,b,c,ans;
	printf("enter a value of a ,b & c: ");
	scanf("%f %f %f",&a,&b,&c);
	max(a,b,c);
}

void max(float a,float b,float c){
	(a>b)?((a>c)?printf("%f is max",a):printf("%f is max",c)):((b>c)?printf("%f is max",b):printf("%f is max",c));
}
