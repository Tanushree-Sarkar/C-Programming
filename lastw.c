#include<stdio.h>
void main()
{
    char s[40];
    int i,w=0,len=0;
    printf("Enter Your String:");
    gets(s);
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    i=len-1;
    while(s[i]==' ')
    i--;
    while(s[i]='')
    {
    	i--;
    	w++;
	}
    printf("Length of the last word is: %d",w);
}
