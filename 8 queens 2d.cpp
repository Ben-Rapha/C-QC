//KINGSLEY OTTO
//ASSIGNMENT 3
//Complete the 8 queens 2 dimensional array program with backtracking that we worked on in class
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	// create dimensional array
	
	int b[8][8]={0}, r = 0, c = 0, count = 1;
	b[0][0]=1;
	
	
	//next coloumn	
	NC: c++; 
	if(c==8) 
		goto print; 
	r=-1;
	
	//next row
	NR: r++;
	if(r==8) 
		goto backtrack;
	
	//row test
	for(int i=0; i<c; i++){
		if(b[r][i]==1) 
			goto NR;
	}
	
	//up diagonal test
	for(int j=1; ((c-j)>=0)&&((r-j)>=0); j++){
		if(b[r-j][c-j]==1) 
			goto NR;
	}
	
	//Down diagonal test
	for(int k=1; ((c-k)>=0)&&((r+k)<8); k++){
		if(b[r+k][c-k]==1) 
			goto NR;
	}	 
	
	b[r][c]=1;
	goto NC;
	
	//backtrack
	backtrack: c--; 
	if(c==-1) return 0; 
	r = 0; 
	while(b[r][c]!=1) r++;
		b[r][c]=0;
	goto NR;
	
	print:
	cout << "Solution No. " << count << ": " << endl; 
	for(int row=0; row<8; row++){
		for(int column=0; column<8; column++){
			cout << b[row][column] << " | ";
		}
    cout << endl;
	}
	count++;
	cout << endl;
	goto backtrack;

}
