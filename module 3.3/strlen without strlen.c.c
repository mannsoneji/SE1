#include<stdio.h>
main()
{
	int i,length=0;
	char str[30];
	
	printf("Enter the string :- ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;i++)
	length++;
 	printf("\nlength = %d ",length);
}
