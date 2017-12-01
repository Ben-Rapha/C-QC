#include<iostream>
#include<cmath>
using namespace std ;
int main(){
	 int x = 814564;
	 int counter = 0;
	 int b = 0;
	 int c = 0;
	 int d = x;
      for (; ;){
      	x =  x/10;
      	counter++;
      	if (x == 0){
      		break;
		  }


	  }
	  for (int i = 0 ; i < counter; i++){
	  	//cout <<i<<" ";
	  	 b = d%10;
	  	 d = d/10;
	  	 if (b > c){
	  	 	c = b;
		   }
	  }
	  cout<<"largest digit  in the number is : "<<c<<endl;
	return 0;
}
