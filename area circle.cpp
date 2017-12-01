#include <iostream>
using namespace std;

//KINGSLEY OTTO 
//HOMEWORK 2
//QUESTION1 

//Calculate the area and circumference of a circle. Program
//prompts user to input an integer which represents the radius of
//a circle. (Assume the value of pi = 3.14.)

int main() { 
	double radius, area,circumference;
	double pi = 3.14;
	cout<<"This program calculates the area and circumference of a circle"<<endl;
	cout<<"Please enter the radius of the circle"<<endl;
	cin>> radius;
	area = radius*radius*pi;
	circumference = 2*pi*radius;
	cout<<"The area of the circle is: "<<area<<endl;
	cout<<"The circumference of the circle is: "<< circumference << endl;
	return 0;
}
