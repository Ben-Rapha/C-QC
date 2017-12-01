//KINGSLEY OTTO
//QUESTION 3
# include <iostream>

using namespace std;

bool isLeapYear(int year) {
   return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

bool allLeapYears(int a[], int n) {
    for (int i = 0; i < n; ++i)
    	for(int j = 0; j<n; ++j){
    		if (isLeapYear(a[j]))
        		return true;
   			
    }
    return false;
}

int main () {
	cout << boolalpha;
   int a[] = {4, 8, 12};
   cout << allLeapYears(a, 3) << endl; // returns true because 4, 8, and 12 are all leap years
   
   int b[] = {4, 100};
   cout << allLeapYears(b, 2) << endl; // returns false because 100 is not a leap year

   return 0;
}
