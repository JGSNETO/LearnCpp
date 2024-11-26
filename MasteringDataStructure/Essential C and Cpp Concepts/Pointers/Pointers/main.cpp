#include <iostream>
#include <stdio.h>

using namespace std;
struct Rectangle {
	int length;
	int breadth;
};
int main() {

	//int a = 10;
	//int* p;
	//p = &a; // Assign the address 
	//cout << a << endl;
	//printf("Using pointer %d", *p);
	//printf("Address of A: %d", p);

	// Pointer to an array
	/*int A[5] = { 2, 4, 6, 8, 10 };
	int* p;
	p = A;

	for (int i = 0; i < 5; i++) {
		cout << p[i] << endl;
	}*/

	// Array created in heap
	//int *p;
	//p = (int *)malloc(5*sizeof(int));
	//// C++ method: p = new int[5] / free(p); You must release the memory, once you finish using.

	//p[0] = 1;
	//p[1] = 2;
	//p[2] = 3;
	//p[3] = 4;
	//p[4] = 5;

	//for (int i = 0; i < 5; i++) {
	//	cout << p[i] << endl;
	//}

	//delete(p);

	// Practice 2: Pointer always take same amount of memory.
	int* p1;
	char* p2;
	float* p3;

	cout << sizeof(p1) << endl;
	cout << sizeof(p2) << endl;
	cout << sizeof(p3) << endl;


	return 0;
}















