#include<stdio.h>
void main()
{
	int i,j,n,f,sum=0,count=0;
	printf("Enter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			f++;
			
		}
		if(f==1)
		{
			printf("%d ",i);
		}
		sum=sum+i;
		if(sum==i)
		count++;
		
	}
}
