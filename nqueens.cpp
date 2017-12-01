#include <iostream>
using namespace std;

void next(int &size, __int128 board, int c, int &solutions) {
   if (c == size)
      ++solutions;
   else for (__int128 q = 1 | (__int128)2 << size << c | (__int128)1 << (size*4) >> c; (q & 1 << size) == 0; q <<= 1)
      if ((board & q) == 0)
         next(size, board | q, c+1, solutions);
}

int main() {
   for (int n = 1, solutions; n <= 15; ++n) {
      next(n, 0, 0, solutions = 0);
      cout << "There are " << solutions << " solutions to the " << n << " queens problem.\n";
   }
   return 0;
}
