#include <fstream>
#include <iostream>
using namespace std;

int main() {
   ifstream f;
   f.open("input.txt");
   if (f != 0) {
      cout << "Your file contains:\n\n";
      while (!f.eof()) {
         string line;
         getline(f, line);
         cout << line << endl;
      }
   }
   f.close();
   return 0;
}
