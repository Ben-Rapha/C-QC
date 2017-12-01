#include <iostream>
#include <cmath>

using namespace std;

// 1 DIMENSION ARRAY WITHOUT NO GOTO


void print(int q[] ){
    static int count = 1;
    cout << "Solution No. "<< count++ << ": " <<endl; 
	cout<<"_______________"<<endl;
	
    for(int i = 0; i < 8; i++)
        cout<< q[i] <<" ";
    cout<<endl<<endl;
}



int main(){
	//set board
	int c = 0, q[8], count = 1;
	q[0] = 0;

	while(true){
        	c++;
        	
        	if(c == 8){
           		count++;
           		print(q);
           		c--;
        	}
        else
        	q[c] = -1;
        	for( ;  ;){  // This loop was left empty intetionally
                	q[c]++;
               		if(q[c] == 8){
                   		c--;
                   		
                   		if(c == -1)
                        	return 0;
                   		else
                        	continue;
                	}
                bool NR = false;
                
                for(int i = 0;i <c ; ++i){
                	if(q[c] == q[i] || c - i == abs(q[c] - q[i])){
                        	NR = true;
                        	break;
                   	}
                }
                
                if(NR)
                	continue;
                break;
           	}
	
	}
}

	

