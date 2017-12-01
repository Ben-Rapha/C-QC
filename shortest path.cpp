#KINGSLEY OTTO


#shortest path



#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

const int rows = 5, cols = 6;
string path[rows][cols];


// Returns the cost of the shortest path from the left to the square in row i, column j.

int calculateCost(int i, int j) {
   static int weight[rows][cols] = {{3,4,1,2,8,6},
                                    {6,1,8,2,7,4},
                                    {5,9,3,9,9,5},
                                    {8,4,1,3,2,6},
                                    {3,7,2,8,6,4}};
   // Declare the cost matrix.
   static int cost[rows][cols] = {0};
   
   // If the cost has already been calculated, return it.
   if(cost[i][j] != 0){
   	
	return cost[i][j];
	}
	
   // Check for the base case.
   if (j == 0) {
   	
    path[i][j] = to_string(i);
      
      return weight[i][j];
   }
   
   // Calculate the costs of the 3 adjacent squares by calling the function recursively.
   int up =  calculateCost((i + rows - 1)% rows, j - 1);
   int left =  calculateCost(i, j - 1);
	int down =  calculateCost((i+1)%rows, j - 1);
  	
   // Find the minimum of the 3 costs.
	 int minCost = up;
	 
	 if (left < minCost){
	 	minCost = left;
	 }
	 
	 if (down < minCost){
	 	minCost = down;
	 }
	if (up == minCost){
		path[i][j] = path[(i+rows-1)%rows][j-1] + to_string(i);
		
	}
	if (left == minCost){
		path[i][j] = path[i][j -1]+ to_string(i);	
	}
	
	if (down == minCost){
		path[i][j] = path[(i+1)%rows][j-1] + to_string(i);
	}
   
   // Calculate the cost of the current square, store the correct number in the cost matrix, and return the cost.
 	cost[i][j] = minCost + weight[i][j];
 	return cost[i][j];
}

int main() {
   int rowMin = calculateCost(0,5),temp = 0 , numsR = 0; 
   
   for(int i = 1; i < rows; i++){
   
   temp = calculateCost(i,5);
   if (rowMin > temp) {
   numsR = i;
   		}
	}
	rowMin = numsR;
   
   cout << "The length of the shortest path is " << calculateCost(rowMin, cols-1);
   cout << ".\nThe rows of the path from left to right are " << path[rowMin][cols-1] << ".";
   	return 0;
}
