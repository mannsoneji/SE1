#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100];
	printf("Enter a string :- ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
    if(!(strcmp(s1,s2)))
	{
		printf(" is paladrome ");
	}	
	else
	{
		printf(" is not paladrome ");
	}
}
