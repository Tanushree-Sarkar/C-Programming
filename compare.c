//compare two string
#include<stdio.h>
void main()
{
	char str1[10],str2[10];
	int i=0,t=0;
	printf("\nEnter First String:");
    gets(str1);
    printf("\nEnter Second String:");
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
    	
       		if(str1[i]==str2[i])
       		printf("Distance is 0 \t");
       		else
       		{
       			t=(str1[i]-str2[i]);
				printf("Distance is %d   ",t);
		    }
       		
    } 

	
}
