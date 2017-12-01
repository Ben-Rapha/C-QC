//homework 8
//KINGSLEY OTTO
//1. Write a program that uses the following recursive functions:
//a. int bigDown(int x) that subtracts 1 from every digit of the given integer
//parameter that is 5 or larger
//b. int even(int x) that deletes all odd digits from a positive integer parameter.
//c. int useRecursion(int x) that returns the sum of the first two digits in a
//positive number. If there is only one digit, that digit is returned.
//Use the given main function provided as below:
//int main() {
//cout << bigDown(10) << endl; prints 10
//cout << bigDown(2654) << endl; prints 2544
//cout << bigDown(19683) << endl;  prints 18573
//cout << evens(16) << endl;  prints 6
//cout << evens(666) << endl;  prints 666
//cout << evens(777) << endl;  prints 0
//cout << useRecursion(567982) << endl; prints 11
//cout << useRecursion(107982) << endl; prints 1
//cout << useRecursion(7) << endl; prints 7
//return 0;
//}

#include<iostream>
using namespace std;



int  bigDown(int x ){
	if (x  < 10){
		if (x >= 5  && x < 10){
			return x - 1;
		} 
		
		return x  ;
	}

	
	if (x % 10 >= 5 ) {
		return (x % 10)+ 10 * bigDown(x/10) -1;
	}

	return  x % 10  + 10 * bigDown(x /10) ;
	
	
	
}

int evens(int x) {
  if (x < 10) {
  	if ( x % 2 !=0){
  		return x/10;
	  }
  	return x;
  }
  	
  if (x % 2 != 0) {
  
  	return evens(x/10);
  }
  return x % 10 + 10 * evens(x/10);
}

int useRecursion(int x ){
	 if (x < 10) 
   		return x;
   
   if (x > 99 )
   		return  useRecursion (x / 10);
   
   return (x % 10 ) + useRecursion(x/10);
	
}



int main (){
	
	cout << bigDown(10) <<endl;
	cout << bigDown(2654) <<endl;
	cout << bigDown(19683) <<endl;
	cout << evens (16) <<endl;
	cout << evens (666) <<endl;
	cout << evens (777) <<endl;
	cout << useRecursion (567982) <<endl;
	cout << useRecursion (107982) <<endl;
	cout << useRecursion (7) <<endl;
	return 0;
}




