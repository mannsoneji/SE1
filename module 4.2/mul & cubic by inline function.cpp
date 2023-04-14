#include<iostream> //header file
using namespace std; //std library
inline int mul(int x , int y) //inline function 
{
	int result=x*y; //variable declaration
	return result; //return value
};
inline int cube(int z) //inline function
{
	int answer=z*z*z; // variable declaration
	return answer; // return value
};
main() //main function
{
	int x=10 , y=20 , z=5; //variable declaration 
	cout<<"multipication of numbers is = "<<mul(x,y)<<endl; //print value of multipication
	cout<<"Cube of a number is = "<<cube(z)<<endl; //print the value of cube
}
