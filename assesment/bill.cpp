#include<stdio.h> //header file
main() //main function
{
	int a,quantity,amount=0,ptot=0,btot=0,vtot=0,tot=0; // variable declaration
	char b[3];// variable declaration
	bool s=true; // variable declaration

	printf("\n1.Pizza			price = 250rs/pcs"); // price declaration
	printf("\n2.Burger		price = 60rs/pcs"); // price declaration
	printf("\n3.Vadapav		price = 30rs/pcs"); // price declaration
while(s) //loop
{
	printf("\nEnter Your Choice:"); // print (choise get)
	scanf("%d",&a); //scan choice
	switch(a) //switch case
{
	case 1: // switch case 
		printf("\nyou have selected Pizza :-");// print the pizza value 
		printf("\nEnter Quantity :- "); // print the quantity 
		scanf("%d",&quantity); //scan pizza value
		amount=quantity*250;  // sub amount
		printf("\nAmount : %d",amount); //print the value 
		ptot=amount; // for value
		printf("\nTotal Amount is = %d",ptot);  //print the amount statment
		break; //break statment
	case 2:
		printf("\nyou have selected Burger :- ");// print the burger value 
		printf("\nEnter Quantity :- ");
		scanf("%d",&quantity);
		amount=quantity*60;
		printf("\nAmount : %d",amount);
		btot=amount;
		printf("\nTotal Amount is = %d",btot);
		break;
	case 3:
		printf("\nyou have selected Vadapav :- "); // print the Vadapav value 
		printf("\nEnter Quantity :- ");
		scanf("%d",&quantity);
		amount=quantity*30;
		printf("\nAmount : %d",amount);
		vtot=amount;
		printf("\nTotal Amount is = %d",vtot);
		break;
	default:
		printf("\nInvalid Choice...");
}
	fflush(stdin); // std in
	printf("\nDo you want place more orders..? y : n ="); // print the choice 
	scanf("%c",&b); // scan the choice 

	if(b=="yes") // if condition
{
	printf("-----------------Menu-----------------"); // print menu for order more 
	printf("\n1.Pizza 		price = 250rs/pcs"); //print the value of pizza
	printf("\n2.Burger 		price = 60rs/pcs"); //print the value of burger
	printf("\n3.Vadapav     price = 30/pcs"); //print the value of vadapav
}
	else if(b=="no") //else if condition
	{
	tot=ptot+btot+vtot; // total amount 
	printf("Total Amount is %d",tot); //print the total amount
	}
	s=false;  // status false
}
}
