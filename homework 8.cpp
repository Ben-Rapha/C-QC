#include<iostream>
#include<cmath>
using namespace std ;



int bigDown(int x){
	
	if ( x < 5)
		return x;
	
	cout<<"The number right now is :"<<x<<endl;
	return bigDown(x-1);
}

int even (int x){
	
	
}


int main(){
	
	int x ;
	cout <<"Please enter a positive number "<< endl;
	cin >> x;
	
	cout << bigDown(x);
	
	return 0;
}
