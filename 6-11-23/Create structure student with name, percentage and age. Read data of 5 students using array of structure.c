#include <stdio.h>
#include <string.h>

struct student{
	int student_age;
	char student_name[30];
	float student_percentage;
};

void main (){
	struct student s[5];
	int i;
	for (i=0;i<5;i++){
		printf("enter your age: ");
		scanf("%d",&s[i].student_age);
		
		printf("enter your name: ");
		scanf("%s",s[i].student_name);
		
		printf("enter your percentage: ");
		scanf("%f",&s[i].student_percentage);
	}
	for (i=0;i<5;i++){
		printf("student %d",i);
		printf("\nyour name: %s\n",s[i].student_name);
		printf("your age: %d\n",s[i].student_age);
		printf("your percentage: %f\n",s[i].student_percentage);
	}
}
