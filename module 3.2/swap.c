#include<stdio.h>
main()
{
	double a,b;
	printf("Enter the value of a :- ");
	scanf("%lf",&a);
	printf("Enter the value of b :- ");
	scanf("%lf",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is %lf and value of b is %lf",a,b);
}
