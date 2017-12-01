//KINGSLEY OTTO
//CS111 Assignment 9
//Write a complete C++ program that will randomly generate 20 integers between the
//ranges 60 – 100 and store the result in an array. The program should consists of the
//following functions to test out the array:
//a. findMax will return the largest number of the array.
//b. findMin will return the smallest number of the array.
//c. findAverage will return the average of the number of the array.
//d. findMinGap will return the smallest gap in between the adjacent entries of the
//array. (A gap between two numbers is the absolute value of their difference)
//e. findGapSum will return the sum of gaps between adjacent entries of an array.




#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std ;



int findMax(int a [] , int size){
	int n = a[0];
	for (int i = 0; i < size; i++){
		if (n < a[i]){
			n = a[i];
		}
	}
	return n;
}

int findMin( int a [], int size){
	int min = a[0];
	
	for (int i = 0 ; i < size ; i++){
		if ( min > a[i]){
			min = a[i];
		}
	}
	return min;
}

double findAverage (int a [], int size){
	double average = 0.0;
	double sum = 0;
	for (int i = 0 ; i < size; i++){
		sum+= a[i];
		
	}
	average = sum/size;
	return average;
}

int findMinGap (int a [], int size){
	int gap = 0;
	int minigap = abs(a[0] - a[1]);
	
	for (int i = 0; i < size ; i++){
		gap = abs(a[i] - a[i - 1]);
		if (minigap > gap){
		   minigap = gap;
		  
		}
	
	}
	
	
	
	return minigap;
	
}

int findGapSum(int a[], int size ){
	int gap = 0;

	for (int i = 1; i < size; i++){
		gap += abs(a[i] - a[i - 1]);	

	}
	return gap;
}

int main (){
	int array[20] = {0};
	int counter = 0;
//	srand(time(NULL));
	
	for (int i = 0; i < 20 ; i++){
		
		array[i] =((rand()%41)+60);
		counter++;
	}
	
	cout<<endl;
	
	for (int i = 0; i < 20; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	
	
	
	cout <<"The largest number in the array is: " <<findMax(array, 20) << endl;
	cout<<endl;
	cout <<"The smallest number in the array is: " <<findMin(array, 20) << endl;
	cout<<endl;
	cout <<"The average for the numbers in the array is: " <<findAverage(array,20) << endl;
	cout<<endl;
	cout <<"The smallest gap in between adjacent entries is: "<< findMinGap(array,20) << endl;
	cout<<endl;
	cout <<"The sum of gaps between adjacent entries of the array is: "<< findGapSum(array,20) << endl;
	
	
	
	
	return 0;
}
