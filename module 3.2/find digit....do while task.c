#include<stdio.h>
main()
{
	int num,count;
	printf("Enter the num :- ");
	scanf("%d",&num);
	
	do
	{
		count++;
		num/=10;
	}while(num!=0);
	printf("the count of number is %d",count);
	
}
