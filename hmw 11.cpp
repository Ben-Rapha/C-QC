//KINGSLEY OTTO
//HOMEWORK 11
//CS111 Assignment 11Write a complete C++ program that contains the following functions:
//a.toUpperCase converts all the characters in the given String to upper case.
//b.toLowerCase converts all the characters in the given String to lower case.
//c.equals determines if both string are the same.
//Program asks user to input a string that is no longer than 100 in length.
//For example, the program may run as follows:
//int main () {
//string word = "Hello"; string another_word = "hello";
//cout << toUpperCase(word) << endl; //prints HELLO
//cout << toLowerCase(word) << endl; //prints hello
//if (equals(word, another_word))
//cout << "Both strings are equal." << endl;else
//cout << "The input strings are different." << endl;return 0;
//}


#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

string toUpperCase(string x){
	int length = x.length();
	for (int i = 0; i < length; i++){
		x[i] = toupper(x[i]);
	}
	return x;
}


string toLowerCase(string x){
	int length = x.length();
	for (int i = 0; i < length; i++){
		x[i] = tolower(x[i]);
	}
	return x;
}

bool equals( string x , string y){
	x  = toLowerCase(x);
	y = toLowerCase(y);
	if (x == y){
		return true;
	}
	else false;
	
}

int main(){
	
	string t, anotherWord;
	anotherWord = "This is another string to be compared with the user input";
	cout << "Please enter a string no longer than 100 in length :"<< endl;
	cout<<endl;
	getline(cin, t);
	cout<<endl;
	while (t.length() > 100){
		cout<< "Please enter a string no longer than 100 :"<<endl;
		getline(cin,t);
	

	}
	cout<< toUpperCase(t)<<endl;
	cout<<endl;
	cout << toLowerCase(t)<<endl;
	cout<<endl;
	if (equals(t, anotherWord)){
		cout<<"Both string are equal"<<endl;
	}
	else {
		cout << "The input strings are different " << endl;
	}
	return 0;
}


