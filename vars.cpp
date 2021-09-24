#include <iostream>

using namespace std;

int main(){
	int num; //integer
	int *var = &num; //pointer to integer
	int &ref = num;//reference to integer
	int const integer = 3;//constant integer

	//first operation
	num = 5;
	++*var;
	cout<<"Pointer increment "<<num<<endl;
	++ref;
	cout<<"Reference increment "<<num<<endl;

	cout<<"The resulting integer is "<<num<<endl;

	return 0;
}
