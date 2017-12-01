//KINGSLEY OTTO

// KBISHOP 
#include <iostream>
#include <cmath>

using namespace std;

int k,n;
bool ok (int q[],  int c , int n ){
	int column = q[c]%n;
	int row = q[c]/n;
	int cR,cC;
	for (int i = 0; i < c ; ++i){
		cR = q[i]/n;
		cC = q[i]%n;
		
	if (abs(column - cC) == abs(row - cR))	
		return false;
	
	}
	return true;
}



void backtrack (int &arc, int count, int q[]){
	
	arc-- ;
	
	if (arc == -1){
		cout << count << endl;
		delete [] q;
		exit (0);
	}
}



int main() { 
//int n = 0,k = 0,count = 0, c = 1;
	cout << "Enter n : ";
	cin >> n;
	cout << "Enter k : ";
	cin >> k;
	int c = 0, count = 0, RR = 0;
	int* q = new int[k];
	
	q[c] = 0;

	cout << "N: " << n << endl;
	cout << "K: " << k << endl;
    cout << "Number of Solutions: ";
	
	while (true) {
		while (c < k ) {
			while (n*n > q[c]){
				if (ok(q,c,n))
					break;
				else q[c]++;
			}
			if (n * n == q[c]){
				backtrack(c,count,q);
				q[c]++; continue;
			}
			else 
			{
					RR= q[c];
			c++;
			q[c] = RR;
		}
	}
	count++;
	backtrack(c,count,q);
	q[c]++;
		 
      }
      return 0;
	
}


