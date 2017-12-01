

//KINGSLEY OTTO
// HOMEWORK 7
//CS111 Assignment 7
//Write a complete C++ program that does the following:
//a. Program prompts user to input a positive integer x greater than 1000. If the
//inputted value is invalid, program continuously prompts user to input a valid
//number. Program then finds the biggest digit of the x by using biggestDigit
//function (c). And prints all the prime numbers from 0 to 100 using isPrime
//function (b).
//b. boolean isPrime(int x) tests if a number is a prime number. If the given
//parameter is prime, then the function returns true; otherwise, it returns
//false. Prime number is a number that is only divisible by one and itself.
//c. int biggestDigit(int x) finds the biggest digit in the given parameter, and
//returns that value.

#include<iostream>
#include<cmath>
using namespace std ;

bool isPrime(int x ){
	if (x <= 1){
		return false;
	}
	else if (x == 2) {
		return true;
	}
	else if (x % 2 == 0){
		return false;
	}
	else{
		for(int i = 2; i < x; i++){
			if(x % i == 0){
				
				return false;
			}
		
		
	} return true;
}

}
int biggestDigit(int x){
	int counter = 0;
	int b = 0;
	int c = 0;
	int d = x;
    for (; ;){
    	x =  x/10;
    	counter++;
      		if (x == 0){
      		break;
		}


	  }
	for (int i = 0 ; i < counter; i++){
	  	b = d%10;
	  	d = d/10;
	  	if (b > c){
	  	 	c = b;
		}
	  }
	  return c;
}

int main(){
	
	int a = 0;
	cout <<"Please enter an integer greater than 1000 :"<<endl;
	cin>>a;
	cout<<"\n";
	
	while(a <= 1000){
		cout << "illgeal input entered"<<endl;
		cout << "Please enter an integer greater than 1000"<<endl;
		cin >> a;
	}
	
	cout <<"The biggest digit in the number entered is "<< biggestDigit(a)<<endl;
	cout<<endl;
	
	if (isPrime(a) == true){
		cout<<boolalpha<<isPrime(a)<<" "<< a <<"  is a prime number \n";
	}
	if (isPrime(a) == false){
			cout<<boolalpha<<isPrime(a)<<" "<< a <<"  is not a prime number \n";
	}

	cout<<endl;
	cout<<"All the prime numbers from 0 to 100 are :  "<<endl;
	cout<<endl;
	for (int i = 0; i <= 100; i++ ){
		if (isPrime(i) == true ){
			cout<<i <<" ";
		}
	}
	cout<<""<<endl;
	cout<<""<<endl;
	return 0;
}
