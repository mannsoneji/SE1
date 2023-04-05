#include<stdio.h> //header file
main() //main function
{
		int a,quantity,amount=0,ptot=0,btot=0,dtot=0,itot=0,tot=0; //variable declaration
		char b; // variable declaration
		bool s= true; //variable declaration
		
	printf("\n1.pizza 		price = 180rs/pcs"); // price declaration
	printf("\n2.Burger		price = 100rs/pcs");
	printf("\n3.Dosa			price = 120rs/pcs");
	printf("\n4.Idli			price = 50rs/pcs");
while(s) //loop
	{
		printf("\nEnter Your Choice:"); // print (choise get)
		scanf("%d",&a); //scan choice
		switch(a) //switch case
	{
		case 1: // switch case 
			printf("\nyou have selected Pizza."); // print the pizza value 
			printf("\nEnter quantity :"); // print the quantity 
			scanf("%d",&quantity); //scan pizza value
			amount=quantity*180;  // sub amount
			printf("\nAmount : %d",amount); //print the value 
			ptot=amount; // for value
			printf("\nTotal Amount is = %d",ptot); //print the amount statment
			break; // break the case
		case 2: 
			printf("\nyou have selected Burger."); // print the burger value 
			printf("\nEnter quantity :"); 
			scanf("%d",&quantity); 
			amount=quantity*100;
			printf("\nAmount : %d",amount);
			btot=amount;
			printf("\nTotal Amount is = %d",btot);
			break;
		case 3:
			printf("\nyou have selected Dosa."); // print the dosa value 
			printf("\nEnter quantity :");
			scanf("%d",&quantity);
			amount=quantity*120;
			printf("\nAmount : %d",amount);
			dtot=amount;
			printf("\nTotal Amount is = %d",dtot);
			break;
		case 4:
			printf("\nyou have selected Idli.");// print the idli value 
			printf("\nEnter quantity :");
			scanf("%d",&quantity);
			amount=quantity*50;
			printf("\nAmount : %d",amount);
			itot=amount;
			printf("\nTotal Amount is = %d",itot);
			break;
		default:
			printf("\nInvalid Choice..."); 
	}
	fflush(stdin); // std in
	printf("\nDo you want place more orders..? y : n ="); // print the choice 
	scanf("%c",&b); // scan the choice 

	if(b=='y') // if condition
{
	printf("-----------------Menu-----------------"); // print menu for order more 
	printf("\n1.pizza 			price = 180rs/pcs"); // print the price of pizza 
	printf("\n2.Burger			price = 100rs/pcs");  //print the price of burger
	printf("\n3.Dosa			price = 120rs/pcs"); // print the price of dosa
	printf("\n4.Idli			price = 50rs/pcs"); //  print the price of idli
}
	else if(b=='n') //else if condition
	{
		tot=ptot+btot+dtot+itot; // total amount 
		printf("Total Amount is %d",tot); //print the total amount
		s=false; // status false
	}
}
}
