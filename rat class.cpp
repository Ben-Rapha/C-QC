//KINGSLEY OTTO


#include <iostream>
#include <cmath>
using namespace std;

class Rat{
	private:
   		int n;
   		int d;
   
public:
   // constructors
   
   // default constructor
   Rat(){
      n=0;
      d=1;
   }
   
   // 2 parameter constructor
   Rat(int i, int j){
      n=i;
      d=j;
   }
   
   // conversion constructor
   Rat(int i){
      n=i;
      d=1;
   }
   
   //accessor functions (usually called get() and set(...) )
   int getN(){ 
   		return n;
	}
   int getD(){ 
   		return d;
	}
   
   void setN(int i){
   		 n=i;
	}
   void setD(int i){
   		 d=i;
	}
   
   //arithmetic operators
   Rat operator+(Rat r){
      Rat t;
      t.n = n*r.d + d*r.n;
      t.d = d*r.d;
      	return t;
   }
   
    Rat operator-(Rat r) {
		Rat t;
		t.n = n*r.d - d*r.n;
		t.d = d*r.d;
			return t;
	}
	
	Rat operator*(Rat r) {
        Rat t;
        t.n = n*r.n;
        t.d = d*r.d;
        	return t;

    }
    Rat operator/(Rat r) {
	 	Rat t;
		 t.n = n*r.d;
		t.d = d*r.n;
			return t;
	}
	

   // 2 overloaded i/o operators
   friend ostream& operator<<(ostream& os, Rat r);
   friend istream& operator>>(istream& is, Rat& r);
}; //end Rat

  // Calculate the GCD (Euclid's algorithm)
	int gcd(int n, int d){
      return d == 0 ? n : gcd(d, n%d);
   }

// operator<<() is NOT a member function but since it was declared a friend of Rat
// it has access to its private parts.

	ostream& operator<<(ostream& os, Rat r){
		   // Rewrite this function so that improper fractions are printed as mixed numbers.  For example:
   // 3/2 should be printed as 1 1/2
   // 1/2 should be printed as 1/2
   // 2/1 should be printed as 2
   // 0/1 should be printed as 0
   // Negative numbers should be printed the same way, but beginning with a minus sign
   
	 	if(r.n>=r.d){
        	if(r.n%r.d==0){
            	os << r.n / r.d <<endl;
        } 
		else {
        int div = gcd(r.n%r.d,r.d);
        	os << r.n / r.d << "  " << (r.n%r.d) / div << " / "<< (r.d) / div << endl;
		}

   		} else if(r.n==0){
			os << r.n << endl;
		} else {
			int div =gcd(r.n%r.d,r.d);
		 	os << r.n / div <<" / "<<r.d/ div << endl;
		}

   		return os;	
	}

// operator>>() is NOT a member function but since it was declared a friend of Rat
// it has access to its private parts.

	istream& operator>>(istream& is, Rat& r){
  		 is >> r.n >> r.d;
   			return is;	
	}		



	double continued_frac_1(int a[], int i) {
		int Q;
		if (i == Q) 
	
			return (double) a[i];
		return ((double)a[i] + 1/continued_frac_1(a, i+1));
	} 


    

	int* continued_frac_2(int a[], int i) {
			int temp;
			static int b[2] = {0,0};
		
			if ( i == 2 ){
				b[1] = 1;
				b[0] = a[2];
					return b;
		}
		
		continued_frac_2(a,i + 1);
		temp = b[0];
		b[0] =  a[i] * temp + b[1];
		b[1] = temp;
		return b;
	} 



Rat continued_frac_3(int a[], int i) {
		 int *x = continued_frac_2(a, i);
		 Rat r (x[0], x[1]);
		 	return r;
	} 
	
int main() {

	int array[] = {3, 7, 16, -1};
	cout << "Continued fractions function 1: " <<
		continued_frac_1(array, 0) << endl;
	
	int *a = continued_frac_2(array, 0);
	cout << "Continued fractions function 2: " << 
		a[0] << '/' << a[1] << endl;
	//delete []a;
	
	cout << "Continued fractions function 3: " <<
		continued_frac_3(array, 0) << endl;
	
	return 0;
}

