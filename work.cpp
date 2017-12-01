#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std ;


int findLargestSum (int a[][2], int row, int col){
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

//	cout << " the colum with the hightest sum is : "<< colindex << endl;
	
	return colindex;
	
}

int findSmallestValue(int a [][2], int row, int col){
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

void subtractAverage (int a [][2], int row, int col){
	int totalsum = 0; 
	double  average = 0.0;
	double  total = 0.0;
	double counter = 0;
	
	for (int i = 0; i < row; i++){
		for ( int n = 0; n < col;  n++){
			totalsum+= a[i][n];
			counter++;
			
		}
		
	}
	average = totalsum/ counter;
//	cout << " totaL sum is : "<< totalsum << endl;
//	cout << " total number of digit in the 2d array is: "<<counter<<endl;
//	cout<< " the average for the 2d array is: "<< average<<endl;
	
	for (int i = 0; i < row; i++){
		for ( int n = 0; n < col;  n++){
			a[i][n]= a[i][n] - average;
			
		}
		
	}
	
	
	cout<<"the new numbers in the 2d array is : " << endl;
	for (int i = 0; i < row; i++){
		for ( int n = 0; n < col;  n++){
		cout << a[i][n] << " ";
			
			 
		}
	cout<<endl;
	}
	
	
//	return totalsum;
}




int main (){
	int array[][2] =  {{1,2},{3,4},{2,3},{9,9}};
	
	
//	srand(time(NULL));
	
//	for (int i = 0; i < 10; i++){
//		
//		for (int n = 0; n < 10; n++){
//			int g = rand()%100 + 100;
//			array[i][n] = g;
//		}
//	}
//	
	for (int i = 0; i < 4; i++){
		for(int n = 0; n < 2; n++){
			cout << array[i][n] << " ";
		}
		cout <<endl;
	}
	
//	for (int i = 0; i < 10; i++){
//			int summ = 0;
//		for(int n = 0; n < 10; n++){
//			cout << array[n][i] << endl;
//			summ += array[n][i];	
//		}
//		cout <<endl;
//		cout << " the total col sum is " << summ << endl;
//	}
//	
	cout << "The column with the largest sum is: "<<findLargestSum(array,4,2) << endl;
	cout <<"The smallest value in the 2D array is:  "<< findSmallestValue(array,4,2) << endl;
	subtractAverage(array,4,2) ;
	
	return 0;	
}
