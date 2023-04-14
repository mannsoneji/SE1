#include<iostream>  //header file 
using namespace std; //std file
class person	// class creation
{
	public:		//access specifier
		string name;	//variable declaration
		int age;	//variable declaration
		void inputdata()	//function for input data
		{
			cout<<"Enter Name:";	//print the name 
			cin>>name;				//scan the name
			cout<<"Enter Age:";		//print the age
			cin>>age;				//scan the age
		}
};
class student : public person	//derived class creation		
{
	public:
		float per;		//variable declaration
		void percentage()		//function for input data
		{
			cout<<"Enter Percentage = ";	//print the value of  percentage 
			cin>>per; 		//scan the value of percentage
		}
};
class teacher : public student				//derived class
{
	public:			//access specifier
		int sal;	//variable declaration
		void salary()		//function for input data
		{
			cout<<"Enter Salary=";	//print the value of salary
			cin>>sal;		//scan the value of salary
		}
			void displaydata()					//display menthod
		{
			cout<<"Name = "<<name<<endl;		//print the name and console
			cout<<"Age = "<<age<<endl;		//print the age and console
			cout<<"Percentage = "<<per<<endl;		//print the percentage and console
			cout<<"salary = "<<sal<<endl;			//print the salary and console
		}
		
};
main() 	//main function
{
	teacher t1;					// class object creation
	t1.inputdata();				//function calling 
	t1.percentage();			//function calling 
	t1.salary();				//function calling 
	t1.displaydata();			//function calling 
}
