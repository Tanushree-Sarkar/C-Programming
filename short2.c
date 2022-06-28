#include<stdio.h>
void main()
{
	char a[30];
	int i=0,j=0;
	printf("Enter Your String: ");
	gets(a);
	a[i]=a[i]-32;
	printf("%c",a[i]);
	for(i=1;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			j++;
			j=i;
			
		}
	}
	for(i=1;a[i]!=NULL;i++)
	{
		if(i!=j)
		{
			if(a[i]==' ')
			{
				a[i+1]=a[i+1]-32;
				printf("%c",a[i+1]);
			}
		}
		else
		{	
			a[i]=a[i+1]-32;
			printf("%c",a[i]);
			j++;
		}
	}
}
