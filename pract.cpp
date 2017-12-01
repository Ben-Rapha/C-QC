// remove the zero digits from a number
#include <iostream>
using namespace std;

int removeZeros(int x) {
  if (x < 10) return x;
  if (x % 10 == 0) return removeZeros(x/10);
  return x % 10 + 10 * removeZeros(x/10);
}

int main() {
   int n, m;
   cout << "Enter a number greater than 0: ";
   cin >> n;
   m = removeZeros(n);
   cout << m << endl;
   return 0;
}
