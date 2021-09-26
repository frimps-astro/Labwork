#include <iostream>

using namespace std;

int main(){
	int i{10};
	int c = 2;
	while(cout<<(c*=2)<<endl, --i);

	return 0;
}
