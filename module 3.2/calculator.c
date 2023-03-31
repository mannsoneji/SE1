#include<stdio.h>
main()
{
	int num1,num2,add,sub,mul,div,mod;
	printf("Enter number 1 :");
	scanf("%d",&num1);
	printf("Enter number 2 :");
	scanf("%d",&num2);
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	printf("\nThe addition of two numbers is %d",add);
	printf("\nThe substraction of two number is %d",sub);
	printf("\nThe multipication of two numbers is %d",mul);
	printf("\nThe division of two numbers is %d",div);
	printf("\nThe modulo of two numbers is %d",mod);
}
