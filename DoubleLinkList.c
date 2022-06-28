//Double Linked List Insertion Deletion Display
#include<stdio.h>
struct node
{
	int data;
	struct node *next, *prev;
	
};

struct node *start=NULL,*n,*store;
struct node* create() //create Node
{
	
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	return(node);
}

void InsertFirst() //Insert Node at the Beginning of the list
{
	n=create();
	printf("\nEnter Data:");
	scanf("%d",&n->data);
	n->next=NULL;
	n->prev=NULL;
	if(start==NULL)
	{
		start=n;
		printf("\nYour data is inserted");
	}
	else
	{
		
		n->next=start;
		start->prev=n;
		start=n;
		printf("\nYour data is inserted");
		
	}
}

void InsertLast() //Insert Node at the Last of the list
{
	n=create();
	printf("\nEnter Data: ");
	scanf("%d",&n->data);
	n->next=NULL;
	n->prev=NULL;
	if(start==NULL)
	{
		start=n;
		printf("\nYour data is inserted");
	}
	else
	{
		store=start;
		while(store->next!=NULL)
		{
			store=store->next;
		}
		store->next=n;
		n->prev=store;
		printf("\nYour data is inserted");
	}
	
}



void DeleteFirst() //Delete Node from the Beginning of the list
{
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		start=start->next;
		start->prev=NULL;
		free(store);
		printf("\nYour data is deleted");
	}
}

void DeleteLast() //Delete Node from the Last of the list
{
	struct node *d;
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		store=start;
		while(store->next!=NULL)
		{
			d=store;
			store=store->next;
			
		}
		d->next=NULL;
		free(store);
		printf("\nYour data is deleted");
	}
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
			store=store->next;
		}
		
	}
}

void main()
{
	
	while(1)
	{
		int choise;
		printf("\n");
		printf("\n1.Insert Node at First");
		printf("\n2.Insert Node at Last");
		printf("\n3.Delete Node at First");
		printf("\n4.Delete Node at last"); 
		printf("\n5.Display value");
		printf("\n6.Exit");
		printf("\nEnter Your Choise: ");
		scanf("%d",&choise);
		switch(choise)
		{
			
			case 1:
				InsertFirst();
				break;
			case 2:
				InsertLast();
				break;
			case 3: 
				DeleteFirst();
				break;
			case 4: 
				DeleteLast();
				break; 
			case 5: 
				print();
				break;
			
			case 6: exit(0);
			
			default: printf("\nInvalid Entry\n");
				
		}
	}
	

	
}
