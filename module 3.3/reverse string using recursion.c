#include<stdio.h>
#include<string.h>
int reverse(char a[10])
{
	return strrev(a);
}
main()
{
	char c[10];
	printf("Enter the name :- ");
	gets(c);
	printf("%s",reverse(c));
}
