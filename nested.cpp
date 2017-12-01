#include <iostream>
using namespace std;

int main(){
	int count = 0;
	for(int i = 1; i <= 500; i++){
		if(i%2 == 1){
			cout << i << " ";
			count++;
			if(count%8 ==0)
			cout<<endl;
		}
	}
}
