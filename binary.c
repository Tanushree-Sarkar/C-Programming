#include<stdio.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
	
};
struct node *start=NULL,*n,*store;
struct node* create() //create Node
{
	
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	return(node);
}
void insert()
{
	n=create();
	printf("\nEnter Data: ");
	scanf("%d",&n->data);
	n->left=NULL;
	n->right=NULL;
	struct node *pr;
	if(start==NULL)
	{
		start=n;
		printf("\nYour data is inserted");
		
    }
    pr=start;
    store=start;
    while(store!=NULL)
    {
    	if(n->data>store->data)
    	{
    		pr=store;
    		store=store->right;
		}
		else if(n->data<store->data)
		{
			pr=store;
			store=store->left;
		}
	}
	if(n->data<pr->data)
	pr->left=n;
	else
	pr->right=n;
}
void print()
{
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		printf("\nValues are:  ");
		while(store!=NULL)
		{
		
			printf("%d\t",store->data);
			store=store->left;
		}
			while(store!=NULL)
		{
		
			printf("%d\t",store->data);
			store=store->right;
		}
		
		
	}
}

void main()
{
	
	while(1)
	{
		int choise;
		printf("\n");
		printf("\n1.Insert Node"); 
		printf("\n2.Display value");
		printf("\n3.Exit");
		printf("\nEnter Your Choise: ");
		scanf("%d",&choise);
		switch(choise)
		{
			
			case 1:
				insert();
				break; 
			case 2: 
				print();
				break;
			
			case 3: exit(0);
			
			default: printf("\nInvalid Entry\n");
				
		}
	}
	

	
}
