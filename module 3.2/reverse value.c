#include<stdio.h>
main()
{
	int i,number,remainder,reverse;
	printf("Enter the number :-");
	scanf("%d",&number);
	
	while(number!=0)
	{
		remainder=number %10;
		reverse=reverse *10 + remainder;
		number=number/10;
	}
	printf("this is the reverse value =%d",reverse);
}
