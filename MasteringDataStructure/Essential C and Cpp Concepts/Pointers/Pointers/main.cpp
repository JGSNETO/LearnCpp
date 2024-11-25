#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int a = 10;
	int* p;
	p = &a; // Assign the address 
	cout << a << endl;
	printf("Using pointer %d", *p);
	printf("Address of A: %d", p);

	// Pointer to an array
	int A[5] = { 2, 4, 6, 8, 10 };
	int* p;
	p = A;

	return 0;
}