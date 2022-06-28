#include<stdio.h>
void main()
{
	int prime(int)
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	prime(a);
	
}
void prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			printf("Not prime");
			break;
		}
	else
	{
		printf("prime");
		break;
	
	}
