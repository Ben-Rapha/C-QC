#include <iostream>
using namespace std;

//KINGSLEY OTTO 
//HOMEWORK 2
// QUESTION 3

//Calculate the sum of all the change (quarters, dimes, nickels
//and cents) in your pocket. Program prompts user to input few
//integers which represent the respective number of coins in the
//pocket.

int main(){
	int quarters,dimes,nikels,cents,total;
	cout<<" Calculate the sum of all the change (quarters, dimes, nickels and cents) in your pocket."<<endl; 
	cout<<"Program prompts user to input few integers which represent the respective number of coins"<<endl;
	cout<<" in the pocket."<<endl;
	cout<<""<<endl;
	cout<<"Please enter number of quarters"<<endl;
	cin>>quarters;
	quarters = quarters*25;
	cout<<"Please enter number of dimes"<<endl;
	cin>> dimes;
	dimes = dimes*10;
	cout<<"Please enter number of nikels"<<endl;
	cin>>nikels;
	nikels= nikels*5;
	cout<<"Please enter number of cents"<<endl;
	cin>>cents;
	cents=cents*1;
	total = quarters+nikels+dimes+cents;
	cout<<"That makes "<<total<<" in change"<<endl;
	return 0;
		
}
