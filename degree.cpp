#include <iostream>
using namespace std;
int main(){
double f;
double c;
cout << "Enter a temperature in degrees Fahrenheit :" ;
cin >> f;
c = (f - 32) * 5 / (double) 9; //makes 9 to 9.0
cout << "In Celsius that is: " << c << endl;
cout <<  "The temperature in Celcius is: " << (f-32)*5/9 << endl;
cout << "The temperature in Celcius is: " << 5/(double)9* (f-32)<<endl; // Notice the strange result!
return 0;
}
