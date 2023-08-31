#include<stdio.h>
 
void main()
{
   int n;
 
   printf("Enter an integer: ");
   scanf("%d",&n);
 
   if ( n & 1 == 1 ){
   
    printf("Odd\n");}
   else{
   
    printf("Even\n");}
 
}
