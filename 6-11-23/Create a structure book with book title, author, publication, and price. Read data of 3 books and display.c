#include <stdio.h>
#include <string.h>

struct book{
	char book_name[30];
	float price;
	char author[30];
	char  publication[30];
};


void main (){
	struct book b[3];
	int i;
	for (i=0;i<3;i++){
		printf("enter your book name: ");
		scanf("%s",b[i].book_name);
		
		printf("enter your book price: ");
		scanf("%f",&b[i].price);
		
		printf("enter your book author: ");
		scanf(" %s",b[i].author);
		
		printf("enter your book publication: ");
		scanf(" %s",b[i].publication);
	}
	for (i=0;i<3;i++){
		printf("\nbook price : %f\n",b[i].price);
		
		printf("book name : %s\n",b[i].book_name);
		
		printf("book author : %s\n",b[i].author);
		
		printf("book publication : %s\n",b[i].publication);
	}
}
