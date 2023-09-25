#include <stdio.h>

void main ()
{
	int a;
	float avg,count=0,sum=0;
	printf("enter 0 to stop");
	
	while (1){
		scanf("%d",&a);
		if(a == 0){
			break;
		}
		count += 1;
		sum += a;
	}
	avg = sum / count;
	printf("%f",avg);

}
