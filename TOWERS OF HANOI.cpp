#KINGSLEY OTTO
#TOWERS OF HANOI


#include <iostream>
#include <vector>
using namespace std;


int main() {
   vector<int> t[3];
   int n;
   cout << "Please enter the number of rings to move: ";
   cin >> n;
   cout << endl;
   
   int close, far ;
   
   if (n%2 == 1){
   		close = 1;
   		far = 2;
	}
   else {
   		close = 2;
   		far = 1;
   }
   
   int from = 0, to = close, candidate = 1, move = 0;
   
    
    for(int i=n+1;i>=1;i--)
        t[0].push_back(i);

    t[1].push_back(n+1);
    t[2].push_back(n+1);
   
   if (n%2 == 1) {
   		from = 0;
   		to = 1;
   		candidate = 1;
	}
   	else {
   			from = 0;
   			to = 2;
   			candidate = 1;
   	}
   	
   while (t[1].size() < n+1) {
   	cout << "Move #" << ++move << ": Transfer ring " << candidate << " from tower " << char(from+'A') << " to tower " << char(to+'A') << "\n";
   	
   	 t[to].push_back(t[from].back());
   	 t[from].pop_back();
   	
   	if (t[(to+1)%3].back() < t[(to+2)%3].back()){
   			from = (to + 1)%3;
	   }
   		
   	else {
   		from = (to + 2) % 3;
	   }
   			
	candidate = (t[from].back());
   	
   	if (n%2 == 1) {
   		if(t[from].back() < t[(from+1)%3].back()){
		   
   		to = (from+1)%3;
	  	} else {
	   		to=(from+2)%3;
		}
	}
	   else {
	   	
	   	if (t[from].back() < t[(from+2)%3].back()){
	   		to = (from+close)%3;
	   		
		   } else {
		   	to=(from+far)%3;
		   }
	   }
	   
	}
	return 0; 
}
