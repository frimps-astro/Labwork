#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string input_line;
	cout<<"Please enter ther text with a lot ? in it\n";
	cin>>input_line;
	cout<<endl;

	int max_length = input_line.size();
	int count = 0;

	while(--max_length){
		if(input_line[max_length] =='?')
			count++;
	} 

	cout<<"\nThe character ? appears "<<count<<" times in the string "<<input_line<<endl;
	return 0;
}
