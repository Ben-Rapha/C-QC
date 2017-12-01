//KINGSLEY OTTO
// HOMEWORK 7

#include<iostream>
#include<cmath>
using namespace std ;

int isPrime(int x ){

	
	if (x <= 1){
		cout<<"false"<<endl;
		//return false;
	}
	else if (x == 2) {
		cout<<"true"<<endl;
		//return true;
	}
	else if (x % 2 == 0){
		cout<<"false"<<endl;
	//	return false;
	}
	else{
		for(int i = 2; i < x; i++){
			if(x % i == 0){
			cout<<"false"<<endl;
			//	return false;
			}
		
		
	}
	cout<<"true"<<endl;// return true;
}
	for (int t = 0 ; t < 100; t++){
    	if (t / t == 1){
    		cout << t <<" ";
		}
	}

return 0;

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
	
	int a;
	cout <<"Please enter an integer greater than 1000"<<endl;
	cin>>a;
	while(a <= 1000){
		cout << "illgeal input entered"<<endl;
		cout << "Please enter an integer greater than 1000"<<endl;
		cin >> a;
	}
	cout<<isPrime(a)<<endl;
	cout<<endl;
	cout <<"The biggest digit in the number entered is "<< biggestDigit(a);
	return 0;
}
