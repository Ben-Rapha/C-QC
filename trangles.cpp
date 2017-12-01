#include<iostream>
using namespace std;

int main(){
	int i, rows,k,l;
	cout<<"Please enter the height: "<< endl;
	cin >> rows;
	rows;
	for (i= 0; i < rows; i++){
		for(int j = 0; j <= i ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}

	for(k = rows; k>=1; --k){
		for(l = 1; l<=k;l++){
			cout<<"* ";
		}
			cout<<endl;
	}
	return 0;
}
