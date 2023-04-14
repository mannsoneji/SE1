#include<iostream> //header file
using namespace std; //std library
class Cricketer	//class creation
{
	public:	//access specifier
		int totrun; //variable declared
		float avgrun; //variable declared
		char batsmanname[20] ;
		char bestperfomance[20]; //variable declared
		
};
class Batsman : public Cricketer	//derived class creation			
{
	public:			
		void inputdata()	//member function
		{
			cout<<"Enter batsman name :- "<<endl; //print batsman name
			gets(batsmanname);	//scan batsman name
			cout<<"Enter total run :- "<<endl; //print the total run
			cin>>totrun;	//scan total run
			cout<<"Enter Best Perfomance :- "<<endl;	//print the best performance
			gets(bestperfomance);
			cin>>bestperfomance;	//scan best perfomance
	}
		void avegrun()	//member function
	{
		avgrun=(float)totrun/3;	//average run 
	}
	void displaydata()	//member function
	{
		cout<<"Total Runs = "<<totrun<<endl;	//display data in console
		cout<<"Best Perfomance = "<<bestperfomance<<endl;
		cout<<"Average Runs = "<<avgrun<<endl;
	}

};
main()//main function
{
	Batsman b; //object creation 
	b.inputdata(); //function calling
	b.avegrun();
	b.displaydata();
}
