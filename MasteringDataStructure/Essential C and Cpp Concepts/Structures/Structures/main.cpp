#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

/*Other Declaration methods;
1. Outside of main:struct Rectangle r1;
2. After definition:
struct Rectangle
{
	int length;
	int breadth;
}r1,r2,r3;

*/
int main()

{
	struct Rectangle r1;
	r1.length = 10;
	r1.breadth = 20;
	printf("Rectangle area: %d\n", r1.length * r1.breadth);

	// Alternatively 
	struct Rectangle r2 = { 10, 15 };
	
	// Size
	printf("Size: %d\n", sizeof(r1));
	// or
	cout << r1.length << endl;


	
	return 0;
}