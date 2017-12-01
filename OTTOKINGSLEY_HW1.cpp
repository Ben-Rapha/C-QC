//KINGSLEY OTTO
//HOMEWORK 1
//Write a program to find and print the first perfect square (i*i) whose last two digits
//are both odd. 


#include <iostream>
using namespace std;

int main()
{
	long int x;
	long int y;
	long int z;
	long int p;
	
	
	for (x = 1; x>0; ++x)
	{
		
		y = x * x;
		y = y % 100;
		z = y % 10;
		p = y / 10;
				
			if ((z % 2 == 1) && (p % 2 == 1))
			{
				cout<< x << endl;
				break;
				
			}
	 } 
}
