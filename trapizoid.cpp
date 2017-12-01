#include <iostream>
using namespace std;
//KINGSLEY OTTO 
//HOMEWORK 2
//QUESTION 3

//Write a program that computes the area of Trapezoid. Unknown
//values should be input by user. The area should be a double


int main(){
	double height, base1, base2, area;
	cout<<"What is the height of the trapizoid? "<<endl;
	cin>>height;
	cout<<"What is the base 1 of the trapizoid? "<<endl;
	cin>>base1;
	cout<<"What is the base 2 of the trapizoid? "<<endl;
	cin>>base2;
	area=  ((base1 + base2)/2)*height;
	cout<<"The area of the trapizoid is: "<<area<<endl;
	return 0;
}
