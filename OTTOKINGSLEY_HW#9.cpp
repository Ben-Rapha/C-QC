// 8 queens problem
//name: KINGSLEY OTTO


#include <iostream>
#include <cmath>
using namespace std;

void backtrack(int &boxes){
    boxes--;
    if (boxes==-1) {
		exit(1);
	}
		
}
void print (int arr[], int &counter){
	cout<< counter <<endl;
	for (int r = 0; r < 8; r++){
		cout<< arr[r] << " ";
	}
	
	cout << endl << endl;
}

bool ok (int arr[8], int a, int b){
	for (int i = 0; i < a ; i++){
		if (arr[i] == arr[a] || (abs(arr[a] - arr[b]) == 1))
			return false;
	}
	
	return true;
}



int main(){
	int final[8] = {0};
	int  a = 0;
	int i = 0;
	int counter = 0 ;
	int arr[8][5]={
	{-1,-1,-1,-1,-1},{ 0,-1,-1,-1,-1},{ 0, 1,-1,-1,-1},{ 0, 2,-1,-1,-1},{ 1, 2,-1,-1,-1},{ 1, 2, 3, 4,-1},{ 2, 3, 5,-1,-1}, { 4, 5, 6,-1,-1}
	 };
	
	
	while (true){
		while(a < 8) {
			final[a]++;
			
			if (final[a] > 8) {
				final[a] = 0;
				backtrack(a);
				continue;
			}
		}
		
		for ( i = 0 ; i < 5 ; i++){
			if (arr[a][i] == -1){
				a++;
				if (a ==8){
					print(final, ++counter);
					backtrack(a);
					
				}
				break;
			} 
			if (ok(final,a,arr[a][i]) == false)
			break;
		} 
		
		}
}








