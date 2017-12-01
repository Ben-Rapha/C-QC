// 2 dimensional array, to make a wave picture

#include <iostream>
using namespace std;

void print(char picture[][41], int rows, int cols) {
  for (int r = 0; r < rows; r++) {
     for (int c = 0; c < cols; c++) cout << picture[r][c];
     cout << endl;
  }
}

void makeWave(char picture[][41], int cap, int m, int w) {
  char waveChar;
  if (w % 2 == 0) waveChar = '*';
  else waveChar = ' ';
  for (int x = m - w; x <= m + w; x++) {
    picture[m - w][x] = picture[m + w][x] = 
      picture[x][m - w] = picture[x][m + w] = waveChar; 
  }
}

int main() {
   char picture[41][41];
   for (int w = 0; w <= 20; w++) 
      makeWave(picture, 41, 20, w);
   print(picture, 41, 41);
   return 0;
}
