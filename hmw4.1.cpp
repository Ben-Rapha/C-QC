//KINGSLEY OTTO
//HOMEWORK 4 QUESTION 1
//. Write a program that displays all the numbers from 100 to 1,000, fifteen per line, that
//are divisible by 5 and 6. Numbers are separated by exactly one space.

#include<iostream>
using namespace std;


int main(){
	int counter = 0; 
	for (int i = 100; i <=1000;i++){
		
		if(i % 5 == 0 && i % 6 == 0){
			cout<<i<<" ";
			counter++;
			
			if(counter%15==0){
				cout<<endl;
			}
		}
	}
	return 0;	
}
