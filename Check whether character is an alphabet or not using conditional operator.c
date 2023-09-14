#include <stdio.h>

void main(){
	char ch;
	printf("enter any char: ");
	scanf("%c",&ch);
	
	(ch>='a' && ch<='z')?printf("%c is alphabet",ch):printf("%c is not alphabet",ch);
	
}
