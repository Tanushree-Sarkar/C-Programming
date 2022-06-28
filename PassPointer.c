#include<stdio.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node *n,*store;
struct node* create() //create Node
{
	
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	return(node);
}
InsertLast(struct node **pass) //Insert Node at the last of the list
{

	n=create();
	printf("\nEnter Data: ");
	scanf("%d",&n->data);
	n->next=NULL;
	if(*pass==NULL)
	{
		*pass=n;
		printf("\nYour data is inserted");
    } 
	else
	{
		store=*pass;
		while(store->next!=NULL)
		{
			store=store->next;
		}
		store->next=n;
		printf("Your data is inserted");
	}
}

 print(struct node *pass) //Print the List
{
	
	if(pass==NULL)
	printf("\nList is empty\n");
	else
	{
		store=pass;
		printf("\nValues are:  ");
		while(store!=NULL)
		{
		
			printf("%d\t",store->data);
			store=store->next;
		}
    }
	
}
void main()
{
	struct node  *start=NULL;
	struct node **p=NULL;
	p=start;
	while(1)
	{
		int choise;
		printf("\n");
		printf("\n1.Insert Node ");
		printf("\n2.Display value");
		printf("\n3.Exit");
		printf("\nEnter Your Choise: ");
		scanf("%d",&choise);
		switch(choise)
		{
			
			case 1:
				InsertLast(&p);
				break;				
			case 2: 
				print(p);
				break;
			
			case 3: exit(0);
			
			default: printf("\nInvalid Entry\n");
				
		}
	}
	

	
}
