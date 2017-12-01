#include<iostream>
using namespace std;


int main (){
	int a[5] = {0};
	string b[5] = {"mike","john","will","roy","mark"};
	
	int i , total;
	double  average;
	total = 0;
	 
	
	for (i = 1; i <= 5; i++){
	cout<< "enter score for student " <<i<<" :";
		cin >> a[i];
	}
	for ( i = 0; i < 5; i++){
		total += a[i];
	}
	average = total/5.0;
	cout<<" the total number is "<<total<<endl;
	cout << "the average number is "<< average<< endl;
	
	cout << "the names of students in this class are : "<<endl;
	for (i = 0 ; i < 5 ; i++){
		cout<< b[i]<<" ";
	}
	cout<<endl;
	for (i = 0 ; i < 5 ; i++){
		cout<<b[i]<<" had a grade of "<< a[i]<<endl;
	}
	
	return 0;
	
}
