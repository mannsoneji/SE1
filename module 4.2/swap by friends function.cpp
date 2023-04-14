#include<iostream> //header file
using namespace std; //std library
class test //class declared
{
	private: //access speacifire
		float a=10; // variable declared
	public: //access speacifire
		float b=20; // variable declared
	friend void fun(); // friend function 
};
void fun() // functiuon declaration
{
	test t; // functiuon declaration
	t.a=t.a+t.b; //logic for swap two values
	t.b=t.a-t.b; //logic for swap two values
	t.a=t.a-t.b; //logic for swap two values
	

	
	cout<<"a = "<<t.a<<endl;// print the value
	cout<<"b = "<<t.b<<endl;// print the value
}
main() //main function 
{
	fun(); //function declaration
}
