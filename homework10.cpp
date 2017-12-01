//KINGSLEY OTTO
//CS111 Assignment 10
//Write a complete C++ program that will contain the following:
//a. Create a 2-dimensional array with 10 rows and 10 columns; Fill the array with random 3
//digit integers.
//b. findLargestSum will return the column with the largest sum. If two or more columns,
//share the largest sum, print out only one column.
//c. findSmallestValue will return the smallest value within the given 2d array.
//d. subtractAverage will calculate the average of the entries in a 2d array and subtracts this
//average from every entry of the array.



#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>




using namespace std ;


int findLargestSum (int a[][10], int row, int col){
	int summax = 0;
	int colindex = 0;

	for (int i = 0; i < col; i++ ){
			int sum = 0;
		for (int n = 0; n < row; n++){
			 sum+= a[n][i];
			if (sum > summax){
				summax = sum;
				colindex = i;
				
			}
		}
	}

	
	return colindex;
	
}

int findSmallestValue(int a [][10], int row, int col){
	int smallestvalue = 0;
	int temp = a[0][0];
	
	for (int i = 0; i < row ; i++){
		int value = 0;
		for (int n = 0; n < col ; n++){
			value = a[i][n];
			if (temp > value){
				temp = value;
			}
			
		}
		smallestvalue = temp;
	}
	
	
	return smallestvalue;
	
	
}

void subtractAverage (int a [][10], int row, int col){
	int totalsum = 0; 
	double  average = 0.0;
	double counter = 0;
	
	for (int i = 0; i < row; i++){
		for ( int n = 0; n < col;  n++){
			totalsum+= a[i][n];
			counter++;
			
		}
		
	}
	average = totalsum/ counter;

	
	for (int i = 0; i < row; i++){
		for ( int n = 0; n < col;  n++){
			a[i][n]= a[i][n] - average;
			
		}
		
	}
	
	cout<<"the new numbers in the 2d array after average is subtracted are:  \n  " << endl;
	for (int i = 0; i < row; i++){
		for ( int n = 0; n < col;  n++){
		cout << a[i][n] << " ";
			
			 
		}
	cout<<endl;
	}
	
	
}




int main (){
	int array[10][10] =  {0};
	
	
//	srand(time(NULL));
	
	for (int i = 0; i < 10; i++){
		
		for (int n = 0; n < 10; n++){
			int g = rand()%100 + 100;
			array[i][n] = g;
		}
	}
	
	for(int i = 0; i < 10; i++){
		
		for(int n = 0; n < 10; n++){
			cout << array[i][n]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;

	cout << "The column is numbered from 0 1 2 3 4 5 6 7 8 9 " <<endl;
	cout<<endl;
	cout << "The column with the largest sum is: "<<findLargestSum(array,10,10) << endl;
	cout<<endl;
	cout <<"The smallest value in the 2D array is:  "<< findSmallestValue(array,10,10) << endl;
	cout<<endl;
	subtractAverage(array,10,10) ;
	
	return 0;	
}
