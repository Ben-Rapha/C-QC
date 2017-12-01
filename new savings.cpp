#include<iostream>
using namespace std;


int main (){
	
	double savings = 0;
	double expenses = 0;
	cout<<"Please enter the amout of savings"<<endl;
	cin>>savings;
	cout<<"please enter the amount expenses"<<endl;
	cin>>expenses;
	
	if (savings >= expenses){
		savings = savings - expenses;
		expenses = 0.0;
		cout <<"solvent " << endl;
	}
	else {
		cout<<"Bankrupt"<<endl;
	}
	return 0;
}
