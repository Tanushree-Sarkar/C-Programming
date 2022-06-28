#include<stdio.h>
void main()
{
	double loan,in,sum,emi,bank[3],sq;
	int y,sl,j,i,yrs,l=0,d=1;
	printf("Enter Loan Amount: ");
	scanf("%lf",&loan);
	printf("Enter Total Years: ");
	scanf("%d",&y);
	for(i=0;i<2;i++)
	{
		printf("How many slabs in bank %d: ",d);
		scanf("%d",&sl);
		sum=0;
		for(j=0;j<sl;j++)
		{
			printf("Enter slab: ");
			scanf("%d",&yrs);
			printf("Enter interest for  slab: ");
			scanf("%lf",&in);
			sq=pow((1+in),yrs*12);
			emi=(loan*in)/(1-1/sq);
			sum=sum+emi;
		}
		bank[l++]=sum;
		d++;
	}
	if(bank[0]<bank[1])
	printf("Bank 1");
	else
	printf("Bank 2");
	
}
