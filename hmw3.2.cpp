//KINGSLEY OTTO
//HOMEWORK 3
//QUESTION 2 
//Write a complete C++ program that does the following:
//(a) Declares a variable number of type int.
//(b) Prompts user for a positive 3-digits integer.
//(c) Tests the input for out of bound cases – larger or smaller than 3 digits using ifelse
//statements.
// (d) Calculates and prints the sum of the digits if the input value is valid.
// (e) Otherwise, display error message and terminate the program.

#include<iostream>
using namespace std;


int main(){
	int numb = 0;
	int sum = 0;
	cout<<"Please enter a 3-digit positive integer"<<endl;
	cin>>numb;
	if (numb/100 <=0 || numb/100 >= 10 ){
	 cout<<"out of bound input"<<endl;
	 cout<<"terminating the program..."	<<endl;
	 return 0;
	 
	} else{
		
		sum += numb/100;
		sum += (numb%100)/10;
		sum += (numb%100)%10;
		cout<<"total sum of the digit entered is: "<<sum<<endl;
		
	}
	return 0;
}
