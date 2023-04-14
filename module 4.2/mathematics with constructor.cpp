#include<iostream> //header file
using namespace std; //std library
class Mathematics // class declaration
{
	public: //access specifire
		Mathematics(int a , int b ) //function for input data
		{
			cout<<"This is Addition of two values = "<<a+b<<endl; // print the Addition of two values
			cout<<"This is Subtraction of two values = "<<a-b<<endl; //print the Subtraction of two values
			cout<<"This is Multiplication of two values = "<<a*b<<endl; // print the Multipication of two values
			cout<<"This is Division of two values = "<<a/b<<endl;// print the divison of two values
		}
};
main()//main function
{
	Mathematics m1= Mathematics(20,10);//function calling
}
