#include<stdio.h>
main()
{
	int i,num,sum;
	printf("Enter the num :- ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("\nthe answer of sum is %d",sum);	
}
