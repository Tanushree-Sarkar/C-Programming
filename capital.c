#include<stdio.h>
void main()
{
	char a[30];
	int i=-1,j;
	printf("Enter your string: ");
	gets(a);
	do
	{
		i++;
		a[i]=a[i]-32;
		
	}while(a[i]==" ");
	puts(a);
	
}
