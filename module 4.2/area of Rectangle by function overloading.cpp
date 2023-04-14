#include<iostream> //header file
using namespace std; //std library
int area(int  a, int b) //function overloading
{
	return a * b;  //return area
}
float area(float z, float y)
{
	return (z*y)/2;
}
float area(float x)
{
	return 3.14 * x * x;
} 
main() //main function
{
	cout<<"This is the area of Rectangle = "<<area(10,20)<<endl; // function calling
	cout<<"This is the area of Triangle = "<<area(20.00f,20.00f)<<endl;
	cout<<"This is the area of circle = "<<area(10.00)<<endl;
}
