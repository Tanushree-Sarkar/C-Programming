#include<stdio.h>
int main()
{
	int a[5],i,t;
	printf("Enter 5 Number for array: ");
	for(i=0;i<5;i++)
	scanf("%d",a[i]);
	printf("Enter Target: ");
	scanf("%d",t);
	for(i=0;i<5;i++)
	{
		if(a[i]+a[i+1]==t);
		break;
		
	}
	printf("%d %d",i,i+1);
}
