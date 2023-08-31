#include<stdio.h>

void main(){
	
	char a_to_z;
	
	printf("enter your chat val: ");
	scanf("%d",&a_to_z);
	
	if(a_to_z==105 || a_to_z==97 || a_to_z==101 || a_to_z==111 || a_to_z==117){
	printf("vowel");
	}
	else{
	printf("consonant");
	}
	
}
	

