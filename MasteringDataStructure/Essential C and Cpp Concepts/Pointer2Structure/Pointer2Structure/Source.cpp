#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main() {

	struct Rectangle r = { 10, 5 };
	cout << r.length << endl;
	cout << r.breadth << endl;

	Rectangle* p = &r; // A pointer p of type Rectangle* (pointer to Rectangle) is declared. It is assigned the address of the r object using the address-of operator &.
	cout << p->length << endl;
	cout << p->breadth << endl;

	// How to create an object of structure in heap

	Rectangle *t;
	t = (struct Rectangle*)malloc(sizeof(struct Rectangle)); // Malloc returns a pointer of type void. That is why we need to cast.
	// In c++: t = new Rectangle 
	t->length = 15;
	p->breadth = 7;

	cout << t->length << endl;
	cout << t->breadth << endl;

	return 0;
}