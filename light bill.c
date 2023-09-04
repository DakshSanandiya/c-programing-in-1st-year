#include <stdio.h>

void main(){
	int unit;
	float a,b;
	printf("enter your units: ");
	scanf("%d",&unit);
	
	if(unit<=50){
		a=unit*0.50;}
	else if(unit>50 && unit<=150){
		a=(unit*0.50) +((unit - 50) * 0.75);
	}
	else if(unit>150 && unit<=250){
		a=(unit*0.50) + ((unit - 50) * 0.75) + (unit - 150) * 1.20; 
	}
	else if(unit>250){
		a=(unit*0.50) + ((unit - 50) * 0.75) +((unit - 150) * 1.20) + (unit - 250) * 1.50;
	}
	b=a * 0.20;
	a=a+b;
	printf("%f",a);
}



