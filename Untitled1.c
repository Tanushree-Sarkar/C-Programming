	while(store!=NULL)
		{
			if(c==t-1)
			{
				n->next=store->next;
				store->next=n;
				printf("Your data is inserted");
				
			}
			store=store->next;
			c++;
		}
