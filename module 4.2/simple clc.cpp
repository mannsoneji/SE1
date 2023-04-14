#include<iostream> //header file
using namespace std; //standard library
class calculator //class calculator
{
	float a,b; // variable declared
	public: //user
		void result() //function to take input
		{
			cout<<"Enter the number :- "; //to print something
			cin>>a; //scan variable
			cout<<"Enter the number :- ";
			cin>>b;
		}
		float add() //functions to add two numbers
		{
			return a + b;
		}
		float sub()  //functions to sub two numbers
		{
			return a - b;
		}
		float mul()  //functions to mul two numbers
		{
			return a * b;
		}
		float div() //functions to mul two numbers
		{
			if(b == 0) // if condition
			{
				cout<<"\n Division by Zero";
			}
			else // else condition
			{
				return a / b;
			}
		}
};
main() // main function
{
	int ch; // variable declaration
	calculator c; // class
	cout<<"Enter 1 to addition 2 numbers "<< // to print something and console 
	cout<<"\nEnter 2 to substract 2 numbers "<<
	cout<<"\nEnter 3 to multiply 2 numbers "<<
	cout<<"\nEnter 4 to devide 2 numbers "<<
	cout<<"\nEnter 0 to exit";
	
	do //
	{
		cout<<"\nEnter your choice :- ";// to print something and console 
		cin>>ch; //scan variable 
		
		switch(ch) // switch case
		{
			case 1: // case for changing the results
				{
					c.result();
					cout<<" Result :- "<<
					c.add()<<"\n";
					break;
				}
			case 2:
				{
					c.result();
					cout<<" Result :- "<<
					c.sub()<<"\n";
					break;
				}
			case 3:
				{
					c.result();
					cout<<" Result :- "<<
					c.mul()<<"\n";
					break;
				}
			case 4:
				{
					c.result();
					cout<<" Result :- "<<
					c.div()<<"\n";
					break;
					}	
		}
	}
	while(ch >= 1 && ch <= 4);
	return 0;
}

