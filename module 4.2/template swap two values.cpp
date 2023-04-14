#include<iostream> //header file
using namespace std; //std library
template <class m> //tamplate
int Swap(m& a, m& b) //variable declaration
{
	m t; //class object
	a=a+b; //equation for swap values
	b=a-b; //equation for swap values
	a=a-b; //equation for swap values
	return 0; //return value
}
main() //main function
{
	int a,b; //variable declaration
	a=20,b=30; //value declaration of variables
	Swap(a,b); //function calling
	cout<<"a= "<<a<<endl; //print and swap the value of a
	cout<<"b= "<<b; // print and swap the value of b
	
}
