#include <stdio.h>

void main (){
	int n;
	printf ("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,max=0,min,sum=0;
	float avg=0;
	for (i=0;i<n;i++){
		printf("enter a value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for (i=0;i<n;i++){
		if (max<a[i]){
			max = a[i];
		}
		else if (min>=a[i]){
			min = a[i];
		}
		sum += a[i];
	}
	avg = sum/n;
	printf("sum = %d\navg = %.3f\nmax = %d\nmin = %d",sum,avg,max,min);
}
