#include<stdio.h>
main()
{
	int i,num,lastdigit,firstdigit,sum=0;
	printf("enter the num :-");
	scanf("%d",&num);
	
	lastdigit=num%10;
	firstdigit=num;
	while(num>=10)
	{
		num=num/10;
	}
	
	firstdigit=num;
	
	sum = firstdigit + lastdigit;
	printf("this is the sum of %d",sum);
	
}
