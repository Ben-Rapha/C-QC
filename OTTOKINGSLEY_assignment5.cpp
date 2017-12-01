//KINGSLEY OTTO
//ASSIGNMENT 5
//Complete the 8 queens 1 dimensional array program with backtracking that we worked on in class.


#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int q[8], c = 0, count = 1;
	q[0] = 0;
	
	NC: c++;
	if (c == 8) 
		goto print;
	q[c] = -1;
	
	NR: q[c]++;
	if(q[c] == 8)
	 goto Backtrack;
	 
	 
	 for (int i = 0; i<c; i++){
	 	if((q[i] == q[c])||(abs(q[c]-q[i]) == (c-i)))
	 			goto NR;
	 		
	 }
	goto NC;
	
	Backtrack: c--;
	if (c == -1)
		return 0;
	goto NR;
	
	print:
	cout << "Solution No. " << count << ": " << endl; 
	cout<<"________________________"<<endl;
	
	for (int row = 0; row < 8; row++){
		for(int column = 0; column < 8; column ++){
			if(q[column]== row) cout <<"1" << " |";
			else cout << "0" << " |";	
		}
		
		cout << endl;
	}
	cout << endl;
	count++;
	goto Backtrack;
	
}
	

	
