#include <stdio.h>

void main (){
	int n;
	printf ("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,even=0,odd=0;
	for (i=0;i<n;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if (a[i] % 2 == 0){
			printf("a[%d] is even\n",i);
			even++;
		}
		else {
			printf("a[%d] is odd\n",i);
			odd++;
		}
	}
	printf("odd = %d & even = %d",odd,even);
}
