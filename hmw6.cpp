//KINGSLEY OTTO
//HOMEWORK 6

#include <iostream>
using namespace std;


int main() {
	int n;
	cout << "Enter an odd positive integer less than 30: ";
	cin >> n;
	
	while ((n <= 0) || (n % 2 == 0) || (n > 29)) {
		
	cout << "Illegal. Try again: ";
	cin >> n;
	}
	cout<<"\n";
	
	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= n; c++)
			if (c == r || ((c + r) == (n + 1))) cout << "*";
				else if ((c == (n + 1) / 2) || (r == (n + 1) / 2)) cout << "*";
					else cout << " ";
					cout << endl;
			}
	return 0;							
									
}
					
					
