#include <iostream>

using namespace std;

void astro(double a);
void astro(int x);
void astro(char z);
void astro(long n);
void astro(char text[]);
void astro(char text[], int x);
void astro(char text[], int k, int j);


int main(){
	char myname[] = "clement osei";
	astro(3.14);
	astro(myname);
	astro(myname, 3);
	astro(myname, 3, 4);

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

void astro(char text[]){
	cout<<"The string passed was "<<text<<endl;
}
void astro(char text[], int x){
	//print each character in text in the index of x-1(2:3rd element)
	//according to array indexing; increment x to the end of array
	cout<<"The text starting from the 3rd element is: ";
	while(cout<<text[x-1],x++, text[x-1]!='\0');
	cout<<endl;
}

void astro(char text[], int j, int k){
	//print each character in text at the offset of 3(4th element)
	//up to 4 characters from that offset
	int stop = j+k;
	cout<<"The text starting from offset 3 with a length of 4 is: ";
	while(cout<<text[j],j++, j<stop);
	cout<<endl;
}

void astro(long n){
	cout<<"The result of function with n called is "<<n<<endl;
}
