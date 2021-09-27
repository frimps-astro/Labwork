#include <iostream>

using namespace std;

void input();
int main(){
	input();

	return 0;
}

void input(){
	int num1, num2;
	cout<<"Please enter first integer\n";
	cin>>num1;

	cout<<"\nPlease enter second integer\n";
	cin>>num2;

	cout<<"The sum of the two numbers is "<<(num1+num2)<<endl;
}
