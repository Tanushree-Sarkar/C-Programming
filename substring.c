//Find the position of substring
#include<stdio.h>
#include<string.h>
void result()
{
	char a[50],b[50];
	int i,j,s,t;
	printf("Enter Your String:");
	gets(a);
	printf("Enter Your Substring: ");
	gets(b);
	s = strlen(a);
    t = strlen(b);
	
	 for (i = 0; i <s; i++)
	 {
	 	j=0;
    	while(j<t)
    	{
    		if(a[i+j]!=b[j])	
    		break;
    		j++;
    	
		}
 
        if (j == t)
     printf("Found at position %d",i+1); 
    }
     
}
void main()
{
	result();
}
