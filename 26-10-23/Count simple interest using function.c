#include <stdio.h>

float siuf(int,int,int);

void main (){
	int p,n,r;
	float ans;
	printf("enter a value of p & r & n: ");
	scanf("%d %d %d",&p,&r,&n);
	ans = siuf(p,r,n);
	printf("ans = %.2f",ans);
}

float siuf(int p,int r,int n){
	float ans;
	ans = (p*n*r)/100;
	return ans;
}
