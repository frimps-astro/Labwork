#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//take input
	cout<<"Please input the string of characters\n";
	char text[100];
	cin>>text;

	//variables for logics
	string part = "";
	int counter = 0;

	cout<<"\nThe results of the split is\n";
	for(int i=0; i<strlen(text); i++){
		//if a hyphen is encountered print the results and reset variables
		if(text[i] == '-'){
			cout<<"\n["<<counter<<"]"<< part;
			part = "";
			counter = 0;
		}else{
		//add each character
		 part = part+text[i];
		 counter++;
		}
	}
	//print the last statement after the last hyphen
	cout<<"\n["<<counter<<"]"<< part<<endl;

	return 0;
}
