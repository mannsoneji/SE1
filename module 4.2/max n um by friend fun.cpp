#include<iostream> //header file
using namespace std; //std library
class Test //class declared
{
	private: //access speacifire
		int x; //variable declaration
	public: //access speacifire
		int y; //variable declaration

void input() // function for input the data
   {
       cout << "Enter the number x:"; //print the value of x
       cin >> x; //scan the value of x
       cout << "Enter the number y:"; //print the value of y
       cin >> y; //scan the value of y
   }
	friend void fun(Test t);// friend function 
};
void fun(Test t) //function declaration
{
   if(t.x>t.y) //if condition
    {
       cout << "Maximum number is x:- " << t.x; //print the max number
    }
    else  //else condition
	{
       cout << "Maximum number is y:- " << t.y; //print the max number
    }
}
main() //main function
{
   Test t; //function name
   t.input();//calling function
   fun(t); //calling function
}
