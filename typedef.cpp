#include <iostream>
#include <cstring>

using namespace std;

	typedef struct{
		string statements[10];
		int current_size;
		int previous_size = 0;
		string biggerText;

		string prompt = "Please enter the 10 strings\n";
	}TextInput;

int main(){


	TextInput text;
	cout<<text.prompt;

	for(int i=0; i<10; i++){
		cout<<"String "<<i+1<<": ";
		cin>>text.statements[i];

		text.current_size = text.statements[i].size();

		if(text.current_size > text.previous_size){
			text.previous_size = text.current_size;
			text.biggerText = text.statements[i];
		} 
	}
	cout<<"\nThe string with the largest size is "<<text.biggerText<<" with a size of "<<text.previous_size<<endl;

	return 0;


}
