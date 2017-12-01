//FANCY PRINT 8 QUEENS

#include <cstdlib>
#include <iostream>
using namespace std;

void print(int q[] ){
    static int count = 1;
    cout << "Solution No. "<< count++ << ": " <<endl; 
	cout<<"_______________"<<endl;
	
	 int i,j,k,l;
	 typedef char box[5][7];
	 box bb,wb,*board[8][8];
	 char sQ = char(219);
 
 
 	box blackQ = 
	{
        sQ,sQ,sQ,sQ,sQ,sQ,sQ,
        sQ,' ',sQ,' ',sQ,' ',sQ,
        sQ,' ',' ',' ',' ',' ',sQ,
        ' ',' ',sQ,sQ,sQ,' ',' ',
        sQ,sQ,sQ,sQ,sQ,sQ,sQ
    };
    
	box whiteQ =
	{
        ' ',' ',' ',' ',' ',' ',' ',
        ' ',sQ,' ',sQ,' ',sQ,' ',
        ' ',sQ,sQ,sQ,sQ,sQ,' ',
        sQ, sQ,' ',' ',' ',sQ,sQ,
        ' ',' ', ' ',' ',' ', ' ', ' '
    };
    
 //fill in bb=black box and wb=whitebox
	 for(i=0;i<5;i++)
	 	for( j=0;j<7;j++)
	 		{ wb[i][j]=' ';
	 		  bb[i][j]=char(219);
	 }
 //fill board with pointers to bb and wb in alternate positions
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
	 		if((i+j)%2==0){
	 			if(q[i] ==j){
				 board[i][j]=&whiteQ; }
			else
	 			{
				 board[i][j]=&wb;
			}                                 
			}else {
				if(q[i]==j){
					board[i][j]=&blackQ;
				} else {
					board[i][j] =&bb;
				}
			}
	// print the board via the pointers in array board
 // first print upper border
	cout<<" ";
	for(i=0;i<7*8;i++)
	 	cout<<'_';
	cout<<endl;
 // now print the board
 	for(i=0;i<8;i++)
 		for(k=0;k<5;k++)
 		{cout<<" "<<char(179); //print left border
 		for(j=0;j<8;j++)
 			for(l=0;l<7;l++)
 				cout<<(*board[i][j])[k][l];
 		cout<<char(179)<<endl; // at end of line print bar and then newline
 		}
 //before exiting print lower border
 	cout<<" ";
 	for(i=0;i<7*8;i++)
 		cout<<char(196);
 	cout<<endl;
   //system("PAUSE");
//return EXIT_SUCCESS;
 
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

	


