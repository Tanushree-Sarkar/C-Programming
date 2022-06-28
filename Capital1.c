#include<stdio.h>
void main()
{
	char a[30];
	int i=0,j;
	printf("Enter your string: ");
	gets(a);
	a[i]=a[i]-32;
	for(i=1;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	puts(a);
	
}
