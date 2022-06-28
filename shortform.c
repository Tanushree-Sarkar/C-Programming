#include<stdio.h>
void main()
{
	char a[30];
	int i=0;
	printf("Enter Your String: ");
	gets(a);
	a[i]=a[i]-32;
	printf("%c",a[i]);
	for(i=1;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
			printf("%c",a[i+1]);
		}
	}
	
}
