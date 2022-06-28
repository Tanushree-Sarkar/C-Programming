//Concatenate two string
#include<stdio.h>
void main()
{
  char str1[20],str2[20],str3[40];
  int i=0,j=0;
  printf("\nEnter First String:");
  gets(str1);
  printf("\nEnter Second String:");
  gets(str2);
  for(i=0;str1[i]!='\0';i++)
  str3[i]=str1[i];
  for(j=0;str2[j]!='\0';j++)
  {
    str3[i]=str2[j];
    i++;
  }
  str3[i]='\0';
  printf("\nConcatenated String is %s",str3);
}
