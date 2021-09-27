#include <iostream>

using namespace std;

void astro(double a);
void astro(int x);
void astro(char z);
void astro(long n);
void astro(string text);

int main(){
	auto myname = 'c';
	astro(3.14);
	astro("hi there");
	astro(myname);

	return 0;
}

void astro(double a){
	cout<<"The result of the function with float called is "<<a<<endl;
}

void astro(int x){
	cout<<"The result of the function with integer is "<<x<<endl;
}

void astro(char z){
	cout<<"The character passed was "<<z<<endl;
}

void astro(string text){
	cout<<"The string passed was "<<text<<endl;
}

void astro(long n){
	cout<<"The result of function with n called is "<<n<<endl;
}
