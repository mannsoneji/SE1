#include<iostream>		//header file
using namespace std;	//std file
class student		// class declaration
{
	public:	//access specifier
		int rollno;		//variable declaration
		void input_rollnumber()		//function for input data
		{
			cout<<"Enter Roll Number :- "<<endl;	//print the roll number
			cin>>rollno; 	//scan the roll number
		}
};
class test		//class declaration
{
	public:		//access specifire
		int sub1mark , sub2mark;			//variable declaration
		void input_mark()					//function for input data
		{
			cout<<"Enter Subject1 Mark :- "<<endl;		//print the marks of sub1
			cin>>sub1mark;		//scan the marks of sub1
			cout<<"Enter Subject2 Mark :- "<<endl;		//print the marks of sub2
			cin>>sub2mark;		//scan the marks of sub2
			}	
};
class result : public student , public test				//derived class
{
	public:		//access specifire
		int totmark;									//variable declaration
		void total_mark()								//function for input data
		{
			totmark=sub1mark+sub2mark; //equation for total marks
		}
		void display()			//function for display data
		{
			cout<<"Roll Number :- "<<rollno<<endl;			//print the roll number and console
			cout<<"Subject1 Marks :- "<<sub1mark<<endl;		//print the subject 1 marks and console
			cout<<"Subject2 Marks :- "<<sub2mark<<endl;		//print the subject 2 marks and console
			cout<<"Total Marks :- "<<totmark<<endl;			//print the total marks and console
		}
};
main()		//min function
{
	result r1;		// class object creation
	r1.input_rollnumber();		//function calling
	r1.input_mark();			//function calling
	r1.total_mark();			//function calling
	r1.display();				//function calling
}
