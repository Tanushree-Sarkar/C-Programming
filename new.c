#include<stdio.h>
void main()
{
	struct account
	{
		int number;
		char name;
		
	};
	struct account t,*p;
	p=&t;
	printf("Enter Number: ");
	scanf("%d",&p->number);
	fflush(stdin);
	printf("Enter Name: ");
	scanf("%c",&p->name);
	printf("%d ",p->number);
	printf("%c",p->name);
	
}
