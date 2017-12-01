//KINGSLEY OTTO 
// HOMEWORK 4 QUESTION 3
//Write a program that reads an unspecified number of integers, determines how many
//positive and negative values have been read, and computes the total and average of
//the input values (not counting zeros). Stop reading input when user enters 0. 


#include<iostream>
using namespace std;

int main(){
		int num =1 ,positive = 0,negative = 0,total = 0,average = 0, counter=0;
		
		while(num !=0){
			counter++;
			cout<<"please enter a digit and press <ENTER>. Enter zero when done."<<endl;
			cin>>num;
			total+=num;
			if (num > 0){
				positive++;
			}
			if (num < 0){
				negative++;
			}
			
		}
		counter--;
		cout<<"The number of postive is : "<<positive<<endl;
		cout<<"The number of negative is :"<<negative<<endl;
		cout<<"The total is : "<<total<<endl;
		cout<<"The average is : " <<(double)total/counter<<endl;
		
		return 0;
}
