#include <stdio.h>

void main (){
	char n[1000];
	int i,c=0;
	printf("enter string: ");
	gets(n);
	for (i=0;n[i] != '\0';i++){
		c++;
	}
	printf("String length = %d",c);
}
