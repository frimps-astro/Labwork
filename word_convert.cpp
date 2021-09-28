#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
	string text;
	cin>>text;

	const char *cptr[sizeof(text)] = {text.c_str()};
	
	for(int i=0; i<sizeof(text); i++)
	cout<<cptr[i]<<endl;

	return 0;
}
