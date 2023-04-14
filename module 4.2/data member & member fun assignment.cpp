#include<iostream> //header file
using namespace std; //std librarey
class bank	//class declared
{
	public:		//access specifier
	string depositor_name,ac_type;	//variable declaration
	float ac_no,ac_bal,deposite_amt,withdrawal_amt;	//variable declaration
	void input()	//input function
	{
		cout<<"Enter the Depositor Name :- "<<endl;	//print the depositor name
		cin>>depositor_name;	//scan dipositor name
		cout<<"Enter the Account Number :- "<<endl; //print account number
		cin>>ac_no;	//scan account number
		cout<<"Enter the Type of Account :- "<<endl;	//print type of account
		cin>>ac_type;	// scan type of account
	}
	void depositedamt()	//input function of deposite amount
	{
		cout<<"Enter Deposited Amount :- "<<endl; //print the diposit amount
		cin>>deposite_amt;	//scan deposite amount
	}
	void withdrawal()	//input function of  withdrawal amount
	{
		cout<<"Enter Withdrwal Amount :- "<<endl;	//print the withdawl amt
		cin>>withdrawal_amt;	//scan withdrawal amount
	}
	void balance()	//input function for check balance and print the ac balance
	{
		cout<<"Depositor name :- "<<depositor_name<<endl;	//print depositor name
		ac_bal=deposite_amt - withdrawal_amt;		//eqaution for balance check
		cout<<"Balance :- "<<ac_bal<<endl;	//print total account balance 
	}
};
main()
{
	bank b;	//object creating
	b.input();	//function calling using class object
	b.depositedamt();	//function calling using class object
	b.withdrawal();	//function calling using class object
	b.balance();	//function calling using class object
}
