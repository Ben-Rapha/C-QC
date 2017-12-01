//KIMGSLEY OTTO
//HOMEWORK 4 QUESTION 2
//Write a program that:
//a.
//Find the smallest integer n such that n2 is greater than 12,000.
//b.
//Find the largest integer n such that n3 is less than 12,000.

#include<iostream>
using namespace std;

int main(){
	int i = 0;
	int m = 1,n = 1;
	while (i < 12000){
		i++;
		n++;
		if(n*n > 12000){
		    cout<<"the smallest integer n greater than 12000 when squared is : "<< n <<endl;
		    break;
		}
	}
	while (i < 12000){	
		i++;
		if (m*m*m < 12000){
			m++;
			if(m*m*m >12000){
				m--;
					}
			
		}
		
	}
	cout <<"the largest integer n less than 12000 when cubed is : "<<m<<endl;
	return 0;
}
