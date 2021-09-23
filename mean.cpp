#include <iostream>
using namespace std; //to help eliminate the repetition of standard input/outputs

//functions for various operations
void mean(int numbers[]);
void mode(int numbers[]);
void median(int numbers[]);

//constant value of integers to take
const int counter = 5;

int main(){
	//array for inputs
	int numbers[counter];
	
	//prompting the user to make inputs
	cout<<"Please enter the 5 integers available: hit enter at each entry.\n";
	//looping to take inputs
	for(int i=0; i<counter; i++){
		cout<<"No. "<<i+1<<": ";
		cin>> numbers[i];
	}
	mean(numbers);
	//mode(numbers);
	median(numbers);

	return 0;
}//main function ends here

	void mean(int numbers[]){
	//calculating the total
	double total=0;
	for(int i=0; i<counter; i++){
		//adding the integers in the array to the variable total
		total +=numbers[i];
	}
	//finding the mean
	double mean = total/counter;
	cout<<"The mean of the numbers is: "<<mean<<"\n";
	}

	void median(int numbers[]){
	//lets find the middle number
	//lets first sort the numbers
	for(int i=0; i<counter-1; i++){
		 for(int j=0; j<counter-i-1; j++){
			if(numbers[j] > numbers[j+1]){
				int temp = numbers[j+1];
				numbers[j+1] = numbers[j];
				numbers[j] = temp;
			}
		 }
		
	}
	for(int i=0; i<counter; i++)
		cout<<numbers[i]<<", ";
	cout<<"The median is "<<numbers[counter/2]<<"\n";
	}





