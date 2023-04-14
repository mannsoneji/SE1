//Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading

#include<iostream> // header file
using namespace std; //std librarry
int maths(int a, int b) //function overloading
{
	return a+b; //return addition
}
int maths(int c, float d)
{
	return c-d;
}
float maths(float e, float y)
{
	return e*y;
}
double maths(int g, double h)
{
	return g/h;
}
main() // main function
{
	cout<<"Addition :- "<<maths(10,20)<<endl; // function calling
	cout<<"Substraction :- "<<maths(20,20.00f)<<endl;
	cout<<"Multiple :- "<<maths(20.00f,20.00f)<<endl;
	cout<<"Devide :- "<<maths(25.00,5.00)<<endl;	
}

