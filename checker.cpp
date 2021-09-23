#include <iostream>
using namespace std;

int takeInput();
void printEvenNumbers(int n);
void printOddNumbers(int n);

int main(){
	int input = takeInput();

	if(input%2 ==0){
		printEvenNumbers(input);
	}
	else{
		printOddNumbers(input);
	}
	return 0;

}

int takeInput(){
	//taking input
	int input;
	cout<<"Please enter the number you want to check\n";
	cin>>input;

	return input;
}

void printEvenNumbers(int n){
	cout<<"\nThe multiplication table up to twenty of "<< n<<" is:\n";
	for(int i=1; i<=20; i++){
		cout<<i<<" x "<<n<<" = "<<i*n<<"\n";
	}
}

void printOddNumbers(int n){
	int counter = 30;
	int i = 1;

	cout<<"The first 30 integers not divisible by the number "<<n<<" are below\n";
	while(counter>0){
		if(i%n != 0){
			cout<<i<<"\n";
			counter--;
	}
		i++;
	}
}
