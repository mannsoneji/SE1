#include<stdio.h>
main()
{
	int i,number,fact;
	printf("enter the number:-");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("This is factorial of number %d",fact);
}
