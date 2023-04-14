#include<iostream> //header file
using namespace std; //std library
class Student  //class declared 
{
	public: //access specifire
		void percentage() // function for input data
		{
			cout<<"Student get 78% percentage in c++"<<endl;//print the percentage of student
		}
};
class Teacher //class declaration
{
	public: //access specifire
		void salary() // function
		{
			cout<<"Teacher salary is 20000 per month"<<endl; //print the salry of teacher
		}
};
class Members : public Teacher , public Student // multiple all the function 
{
	public: //access specifire
		void name() // function for input data
		{
			cout<<"The name of teacher is Manav"<<endl; //print the name of teacher
			cout<<"The name of student is Mann"<<endl; //print the name of student
		}
		void age() //function for input data
		{
			cout<<"The age of teacher is 25 years"<<endl; //print the age of teacher
			cout<<"The age of student is 18 years"<<endl; //print the age of student
		}
};
main() //main function
{
	Members m; // object creating
	m.name(); //function calling 
	m.age(); 
	m.salary();
	m.percentage(); 
}














