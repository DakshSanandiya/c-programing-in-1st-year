#include <stdio.h>

struct employee{
	int dob;
	int doj;
};
void main (){
	struct employee emp;
	printf("enter your DOB: ");
	scanf("%d",&emp.dob);
	printf("enter your DOJ: ");
	scanf("%d",&emp.doj);
	printf("\nyour DOB: %d",emp.dob);
	printf("\nyour DOJ: %d",emp.doj);
}
