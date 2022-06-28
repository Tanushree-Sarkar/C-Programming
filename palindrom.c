#include<stdio.h>
void main()
{
	char a[30],b[30];
	int i,k=0,j=0,count=0;
	printf("Enter your input: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	
	for(i=count-1;i>=0;i--)
	{
		
		b[j]=a[i];
		j++;
	}
	puts(b);
	for(i=0;i<count;i++)
	{
		if(a[i]==b[i])
		{
			k++;
		}
	}
	if(k==i)
	printf("palindrome");
	else
	printf("Not palindrome");
	
}
