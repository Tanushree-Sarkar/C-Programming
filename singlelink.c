#include<stdio.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node *start=NULL,*n,*store;
void create()
{

	n=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data: ");
	scanf("%d",newn->data);
	n->next=NULL;
	if(start==NULL)
	start=n;		
	else
	{
		store=start;
		while(store->next!=NULL)
		{
			store=store->next;
		}
		store->next=n;
	}
}
void print()
{
	store=start;
	printf("Values are:  ");
	while(store!=NULL)
	{
		
		printf("%d\t",store->data);
		store=store->next;
	}
	
}
void main()
{
	int i,t;
	printf("How Many Node You Want to Create: ");
	scanf("%d",&t);
	while(i<t)
	{
			create();
			i++;	
	}
	print();
	
}
