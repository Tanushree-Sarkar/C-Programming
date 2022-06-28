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
		
			j=i;
			j=j+2;
			
		}
	}
	for(i=1;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
			printf("%c",a[i+1]);
		}
		if(i==j)
		{
			printf("%c",a[i]);
			j++;
		}
	}
	
}
