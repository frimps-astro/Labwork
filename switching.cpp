#include <iostream>

using namespace std;

int main(){
	double first, second;
	char opp;

	cout<<"Please enter the first value\n";
	cin>>first;

	cout<<"\nPlease enter the second value\n";
	cin>>second;

	cout<<"\nPlease enter the operator to be used (+,-,x or /)\n";
	cin>>opp;
	
	double result=0;

	switch(opp){
		case '+':
			result = first+second;
			break;
		case '-':
			result = first-second;
			break;
		case 'x':
			result = first*second;
			break;
		case '/':
			result = first/second;
			break;
		default:
			result = 0;
			break;
	}
	if(result !=0)
	cout<<"The results of "<<first<<" "<<opp<<" "<<second<<" is "<<result<<endl;
	else
	cout<<"You entered an invalid operator\n";

	return 0;
}
