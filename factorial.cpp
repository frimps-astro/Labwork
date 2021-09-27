#include <iostream>
using namespace std;

void factorial(int &x);

int main(){
	int number;
	cout<<"Please enter a number to find its factorial\n";
	cin>>number;

	factorial(number);

	return 0;
}

void factorial(int &x){
	int fact = 1;
	int k = x;
	while(fact *= x, x--, x > 1);

	cout<<"The factorial of "<<k<<" is "<<fact<<endl;
}
