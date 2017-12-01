#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int multiples, counter, temp ;
	cout <<"Please enter an integer less than 10"<<endl;
	cin >> multiples;
	
	if ( multiples > 9){
		cout << "Invalid input"<< endl;
		cout << "Terminating program..."<<endl;
		cout << "Program terminated " <<endl;
		return 0;
	}  else {
		for( int i = 0; 1 < 100; i++){
			temp = multiples * i;
			cout<< temp;
			if ( i % multiples == 0){
				cout << endl;
			}
		}
	}
	
	
	return 0 ;
}
