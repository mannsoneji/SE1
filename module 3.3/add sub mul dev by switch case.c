#include<stdio.h>
main()
{
	int number,a,b;
	printf("Enter the number :- ");
	scanf("%d",&number);
	printf("\nEnter the value of a :- ");
	scanf("%d",&a);
	printf("\nEnter the value of b :- ");
	scanf("%d",&b);
	
	switch(number)
	{
		case 1 :
			{
				printf("This is the adition of %d ",a+b);
				break;
			}
		case 2 :
		    {
			    printf("This is substraction of %d ",a-b);
			    break;
			}
		case 3 : 
		    {
		    	printf("This is the multipication of %d ",a*b);
		    	break;
			}
		case 4 :
		 	{
		 		printf("This is devide of %f",a/b);
		 		break;
			}
		default : 
		    {
		    	printf("invalid input");
			}			
	}
	
}
