//KINGSLEY OTTO
// HOMEWORK 3 QUESTION 1

//Write a complete C++ program that does the following:
//(a) Declares two variables, savings and expenses, of type double.
//(b) Prompts the user for the amount of savings and expenses and stores in the
//corresponding variable.
//(c) Write an if–else statement that
//• outputs the word Solvent
//• decreases the value of savings by the value of expenses and saves in
//savings.
//• Prints the resulting savings.
//• sets the value of expenses to 0 in the program, provided that
//savings is at least as large as expenses
//(d) ) If, the savings is less than expenses, the if-else statement
//• outputs the word Bankrupt
//• does not change the value of any variable


#include<iostream>
using namespace std;


int main (){
	
	double savings = 0;
	double expenses = 0;
	cout<<"Please enter the amout of savings"<<endl;
	cin>>savings;
	cout<<"please enter the amount expenses"<<endl;
	cin>>expenses;
	cout<<endl;
	if (savings >= expenses){
		savings = savings - expenses;
		expenses = 0.0;
		cout << "Savings "<<" = "<<savings<<endl;
		cout<<endl;
		cout <<"solvent " << endl;
	}
	else {
		cout<<"Bankrupt"<<endl;
	}
	return 0;
}
