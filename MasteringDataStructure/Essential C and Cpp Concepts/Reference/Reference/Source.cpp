#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int a = 10;
	int &r = a; // Reference does not consume memory
	r = 25;

	int b = 30;
	r = b; // Does not mean R is B. But that R has the value of b. b
	cout << a << " " << r << endl;

	return 0;
}