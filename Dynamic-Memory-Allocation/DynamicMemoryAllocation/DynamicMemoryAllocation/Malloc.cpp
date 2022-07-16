//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//
//	int* ptr;
//	int i, numberOfItems;
//
//	printf("Number of items: ");
//	scanf_s("%d", &numberOfItems);
//	printf("\n Number of items inserted: %d\n", numberOfItems);
//
//	ptr = (int*)malloc(5 * sizeof(int));
//
//	if (ptr == NULL) {
//		printf("\nMemory allocation fail");
//		exit(0);
//	}
//	else {
//		for (i = 0; i < numberOfItems; i++) {
//			ptr[i] = i + 1;
//		}
//
//		printf("Items: \n");
//		for (i = 0; i < numberOfItems; i++) {
//			
//			printf("%d\n", ptr[i]);
//		}
//	}
//	system("PAUSE");
//	return 0;
//}