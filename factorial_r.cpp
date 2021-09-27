#include <iostream>
using namespace std;

void factorial(int &x, int &f);

int main(){
	int number;
	int fact = 1;
	cout<<"Please enter a number to find its factorial\n";
	cin>>number;

	factorial(number, fact);//call the function here ones

	//output the value of fact
	cout<<"The factorial of the number entered is "<<fact<<endl;
	return 0;
}

void factorial(int &x, int &f){
	//check for the condition that x is still greater than 1
	if(x > 1){
		f *= x;
		x--;
		//recursively call the function
		factorial(x, f);
	}
	
	
}
